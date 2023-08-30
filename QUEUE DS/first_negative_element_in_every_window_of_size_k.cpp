#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>first_negative_element(int arr[],int n,int k){
    queue<int>q;
    vector<int>v;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    for(int i=k;i<n;i++){
        if(!q.empty()){
            v.push_back(arr[q.front()]);
        }
        else v.push_back(0);

        while(!q.empty()&&q.front()<=i-k){
            q.pop();
        }
        if(arr[i]<0){
            q.push(i);
        }
    }
    if(!q.empty()){
        v.push_back(arr[q.front()]);
    }
    else{
        v.push_back(0);
    }
    return v;
}
int  main(){
    int t;
    cout<<"enter the no of test cases "<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"enter the size of array "<<endl;
        cin>>n;
        int arr[n];

        cout<<"enter the elments of the array "<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cout<<"enter the size of window "<<endl;
        cin>>k;
        vector<int>ans=first_negative_element(arr,n,k);

        cout<<"the first negative element of each window of size "<<k<< "are::"<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}