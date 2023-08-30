#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int x){
    unordered_set<int>us;
    for(int i=0;i<n;i++){
        if(us.empty()==0&&us.find(x-arr[i])!=us.end()){
            return true;
        }
        us.insert(arr[i]);
    }
    return false;
}
int main(){
    int arr[]={12,2,5,7,8,6,5,4,3,9,8,4,2,43,4,2,23};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"enter sum"<<endl;
    cin>>x;
    if(pairsum(arr,size,x)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}