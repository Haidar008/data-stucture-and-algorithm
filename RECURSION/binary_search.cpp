#include<iostream>
using namespace std;
int binary_search(int arr[],int low,int high,int key){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return binary_search(arr,low,mid-1,key);
    }
    else{
        return binary_search(arr,mid+1,high,key);
    }
}
int main(){
    int n;
    cout<<"enter the size "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element into array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key "<<endl;
    cin>>key;
    int ans=binary_search(arr,0,n-1,key);
    cout<<ans<<endl;
    return 0;
}