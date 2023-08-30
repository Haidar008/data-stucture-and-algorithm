#include<bits/stdc++.h>
using namespace std;
int count_union(int arr1[],int arr2[],int m,int n){
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        s.insert(arr2[i]);
    }
    return s.size();
}
int main(){
    int arr1[5]={12,32,34,34,22};
    int arr2[6]={32,43,54,56,12,2};
    int m=5;
    int n=6;
    cout<<count_union(arr1,arr2,m,n)<<endl;
}