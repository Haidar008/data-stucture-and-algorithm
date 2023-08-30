#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void missing_and_repeating(int arr[],int n){
    int i=0;
    while(i<n){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
             cout<<"repeating="<<arr[i]<<endl;
             cout<<"missing="<<i+1<<endl;
        }
    }
}
int main(){
    int arr[6]={2,6,3,3,4,1};
    int n=6;
    missing_and_repeating(arr,n);
    return 0;
}