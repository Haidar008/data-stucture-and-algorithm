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
void insert(int arr[], int *n, int key){
    *n = *n + 1;
    arr[*n - 1] = key;
    int i = *n - 1;
    while (i > 0 && arr[i] > arr[(i-1)/2]){
        swap(arr[i], arr[(i-1)/2]);
        i = (i-1)/2;
    }
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
    int key;
    cout<<"Enter the key you want to insert "<<endl;
    cin>>key;
    insert(arr,&n,key);
    show_heap(arr,n);
    return 0;
}