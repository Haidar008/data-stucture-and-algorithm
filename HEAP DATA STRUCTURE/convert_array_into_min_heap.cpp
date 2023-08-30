#include<iostream>
#include<vector>
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
        swap(arr[smallest],arr[i]);
        min_heapify(arr,n,smallest);
    }
}
void build_min_heap(vector<int>&arr){
    int n=arr.size();
    for(int i=(n/2-1);i>=0;i--){
        min_heapify(arr,n,i);
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
    build_min_heap(arr);
    cout<<"min heap "<<endl;
    print_array(arr);
    return 0;
}