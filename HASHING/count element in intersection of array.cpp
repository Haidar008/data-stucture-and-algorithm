#include<bits/stdc++.h>
using namespace std;
int count_intersection(int arr1[],int arr2[],int n,int m){
    unordered_set<int>s;
    int count=0;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        if(s.find(arr2[i])!=s.end()){
            count++;
        }
        s.erase(arr2[i]);
    }
    return count;
}
int main(){
    int arr1[6]={12,34,12,56,78,98};
    int arr2[7]={34,56,67,78,12,12,65};
    int n=6;
    int m=7;
    cout<<count_intersection(arr1,arr2,n,m)<<endl;
    return 0;
}