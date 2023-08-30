#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class arrays{
    public:
    bool check(int arr[],int brr[],int m,int n){ 
    unordered_map<int,int>mp1,mp2;
    if(m!=n) return false;
    for(int i=0;i<m;i++){
        mp1[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        mp2[brr[i]]++;
    }
    for(int i=0;i<m;i++){
        if(mp1[arr[i]]!=mp2[arr[i]]){
            return false;
        }
    }
    return true;
    }
}; 
int  main(){
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
    bool ans=A.check(arr,brr,m,n);
    if(ans){
        cout<<"The two arrays are equal "<<endl;
    }
    else cout<<"The two arrays are not equal "<<endl;
    return 0;
}