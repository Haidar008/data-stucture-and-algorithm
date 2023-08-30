#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>findmax(int arr[],int n,int k){
     vector<int>v;
        deque<int>dq(k);
        for(int i=0;i<k;i++){
            while(!dq.empty()&&arr[dq.back()]<=arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        for(int i=k;i<n;i++){
            v.push_back(arr[dq.front()]);
            
            while(!dq.empty()&&dq.front()<=i-k){
                dq.pop_front();
            }
            
            while(!dq.empty()&&arr[dq.back()]<=arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        v.push_back(arr[dq.front()]);
        return v;
}
int main(){
    int arr[]={1,2,3,1,4,5,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int>ans=findmax(arr,n,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}