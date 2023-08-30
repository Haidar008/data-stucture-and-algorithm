#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find(int arr[],int n){
    int A_xor_B=0;
    for(int i=0;i<n;i++){
        A_xor_B=A_xor_B^arr[i];
    }
    int RMSB=A_xor_B&(~A_xor_B+1);
    int A=0,B=0;
    for(int i=0;i<n;i++){
        if(RMSB&arr[i]){
            A=A^arr[i];
        }
        else{
            B=B^arr[i];
        }
    }
    if(A>B){
        cout<<A<<" "<<B<<endl;
    }
    else{
        cout<<B<<" "<<A<<endl;
    }
}
int main(){
    int arr[8]={4,2,4,5,2,3,3,1};
    int n=8;
    find(arr,n);
    return 0;
}