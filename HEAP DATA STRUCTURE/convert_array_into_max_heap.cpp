#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&arr,int n,int i){
    int largest=i;
    int lc=2*i+1;
    int rc=2*i+2;
    if(lc<n&&arr[lc]>arr[largest]){
        largest=lc;
    }
    if(rc<n&&arr[rc]>arr[largest]){
        largest=rc;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void build_max_heap(vector<int>&arr){
    int n=arr.size();
    for(int i=(n/2-1);i>=0;i--){
        heapify(arr,n,i);
    }
}
void print_array(vector<int>arr){
    int n=arr.size();
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements into array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"original array "<<endl;
    print_array(arr);
    build_max_heap(arr);
    cout<<"max heap "<<endl;
    print_array(arr);
    return 0;
}