#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,5,7,9,14,23,45,67,78,87,89,90,114};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(binary_search(arr,arr+n,2)){
        cout<<"present"<<endl;
    }
    else cout<<"absent"<<endl;
    return 0;
}