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
void build_heap(vector<int>&arr){
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
vector<int>merge(vector<int>arr,vector<int>brr){
    int n1=arr.size();
    int n2=brr.size();
    vector<int>heap3;
    for(int i=0;i<n1;i++){
        heap3.push_back(arr[i]);
    }
    for(int i=0;i<n2;i++){
        heap3.push_back(brr[i]);
    }
    build_heap(heap3);
    return heap3;
}
void show_heap(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,m;
    cout<<"Enter the size of heap1 and heap2 respectively"<<endl;
    cin>>n>>m;
    vector<int>heap1;
    vector<int>heap2;
    int ele;
    cout<<"Enter the elements into heap 1"<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        heap1.push_back(ele);
    }
    cout<<"Enter the elements into heap 2"<<endl;
    for(int i=0;i<m;i++){
        cin>>ele;
        heap2.push_back(ele);
    }
    build_heap(heap1);
    build_heap(heap2);
    cout<<"The heap1 is "<<endl;
    show_heap(heap1);
    cout<<"The heap2 is "<<endl;
    show_heap(heap2);
    vector<int>merged=merge(heap1,heap2);
    cout<<"The resultant heap after merging the two heaps is "<<endl;
    show_heap(merged);
    return 0;
}