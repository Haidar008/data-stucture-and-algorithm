#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void missing_and_repeating(int arr[],int n){
    int count[n]={0};
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
   for(int i=0;i<n;i++){
    if(count[i]==2){
        cout<<"repeating="<<i+1<<endl;
    }
    if(count[i]==0){
        cout<<"missing="<<i+1<<endl;
    }
   }
}
int main(){
    int arr[6]={2,6,6,3,4,1};
    int n=6;
    missing_and_repeating(arr,n);
    return 0;
}