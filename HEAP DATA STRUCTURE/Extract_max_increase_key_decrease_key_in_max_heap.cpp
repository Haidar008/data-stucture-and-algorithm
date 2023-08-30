#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
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
void build_max_heap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
int extract_max(int arr[],int n){
    int ans=arr[0];
    swap(arr[0],arr[n-1]);
    heapify(arr,n-1,0);
    return ans;
}
void increase_key(int arr[],int index,int key){
    arr[index]=key;
    while(index>0&&arr[index]>arr[index/2]){
        swap(arr[index],arr[index/2]);
        index=index/2;
    }
}
void decrease_key(int arr[],int n,int index,int key){
    arr[index]=key;
    heapify(arr,n,index);
}
void show_heap(int arr[],int n){
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build_max_heap(arr,n);
    show_heap(arr,n);
    int index,key;
    cout<<"Enter the index and increased key "<<endl;
    cin>>index>>key;
    increase_key(arr,index,key);
    show_heap(arr,n);
    cout<<"Enter the index and decreased key "<<endl;
    int ind,ke;
    cin>>ind>>ke;
    decrease_key(arr,ind,ke,n);
    cout<<"The maximum element is "<<extract_max(arr,n)<<endl;
    cout<<"The second maximum element is "<<extract_max(arr,n)<<endl;
    return 0;
}