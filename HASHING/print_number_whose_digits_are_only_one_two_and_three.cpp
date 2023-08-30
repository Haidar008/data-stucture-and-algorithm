#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isvalid(int value){
    while(value!=0){
        int rem=value%10;
        if(rem!=1&&rem!=2&&rem!=3){
            return false;
        }
        value=value/10;
    }
    return true;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        if(isvalid(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n);
    return 0;
}