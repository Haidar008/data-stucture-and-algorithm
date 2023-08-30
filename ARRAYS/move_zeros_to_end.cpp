#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void moves_0(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0&&i!=j){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[7]={0,0,3,4,0,3,89};
    int n=7;
    print(arr,n);
    moves_0(arr,n);
    print(arr,n);
}