#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dleete(int arr[],int n,int position){
    for(int i=position;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    return --n;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int position=4;
    n=dleete(arr,n,position);
    print(arr,n);
    return 0;
}