#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void min_heapify(vector<int>&arr,int n,int i){
    int smallest=i;
    int lc=2*i+1;
    int rc=2*i+2;
    if(lc<n&&arr[lc]<arr[smallest]){
        smallest=lc;
    }
    if(rc<n&&arr[rc]<arr[smallest]){
        smallest=rc;
    }
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        min_heapify(arr,n,smallest);
    }
}
void build_min_heap(vector<int>&arr){
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        min_heapify(arr,n,i);
    }
}
void max_heapify(vector<int>&arr,int n,int i){
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
        max_heapify(arr,n,largest);
    }
}
void convert(vector<int>&arr){
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        max_heapify(arr,n,i);
    }
}
void show_heap(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of min heap "<<endl;
    cin>>n;
    vector<int>min_heap;
    cout<<"Enter the elements into min heap "<<endl;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        min_heap.push_back(ele);
    }
    build_min_heap(min_heap);
    cout<<"The min heap is "<<endl;
    show_heap(min_heap);
    convert(min_heap);
    cout<<"The converted max_heap is "<<endl;
    show_heap(min_heap);
    return 0;
}