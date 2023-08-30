#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void cycle_sort(int arr[],int n){
   int i=0;
   while(i<n){
    if(arr[i]!=arr[arr[i]-1]){
        swap(arr[i],arr[arr[i]-1]);
    }
    else{
        i++;
    }
   }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={4,5,3,2,6,1,7,8,10,9};
    int n=10;
    print(arr,n);
    cycle_sort(arr,n);
    print(arr,n);
    return 0;
}