#include<bits/stdc++.h>
using namespace std;
vector<int>k_largest(int arr[],int n,int k){
    vector<int>ans;
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    for(int i=0;i<k;i++){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    vector<int>ans=k_largest(arr,n,k);
    int s=ans.size();
    cout<<"The "<<k<<" largest elements are "<<endl;
    for(int i=0;i<s;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}