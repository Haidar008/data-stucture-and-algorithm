#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class arrays{
    public:
    vector<int>sort(int arr[],int brr[],int n,int m){
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<m;i++){
            int freq=mp[brr[i]];
            while(freq--){
                v.push_back(brr[i]);
            }
            mp.erase(brr[i]);
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            int freq=it->second;
            while(freq--){
                v.push_back(it->first);
            }
        }
        return v;
    }
};
int main(){
arrays A;
    int m,n;
    cout<<"enter the size of two arrays "<<endl;
    cin>>m>>n;
    int arr[m];
    int brr[n];
    cout<<"enter the elements into first array "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cout<<"enter the elements into second array "<<endl;
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    vector<int>ans=A.sort(arr,brr,m,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}