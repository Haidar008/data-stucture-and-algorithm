#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int second(int arr[],int n){
    int largest=arr[0];
    int second_largest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest){
            if(arr[i]>second_largest||second_largest==-1){
                second_largest=arr[i];
            }
        }
    }
    return second_largest;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={1,2,3,4,5,3,89};
    int n=7;
   int ans=second(arr,n);
   cout<<ans;
}