#include<iostream>
using namespace std;
int search(int arr[],int low,int high,int key){
    if(low>high) return -1;
    int mid=low+(high-low)/2;
    if(key==arr[mid]) return mid;
    if(arr[low]<=arr[high]){
        if(key>=arr[low]&&key<arr[mid]){
           return search(arr,low,mid-1,key);
        }
        else{
            return search(arr,mid+1,high,key);
        }
    }
    else{
        if(key>arr[mid]&&key<=arr[high]){
            return search(arr,mid+1,high,key);
        }
        else{
            return search(arr,low,mid-1,key);
        }
    }
}
int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS INTO ARRAY "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"ENTER THE KEY TO BE SEARCHED "<<endl;
    cin>>key;
    int index=search(arr,0,n-1,key);
    if(index==-1) cout<<"element not found "<<endl;
    else cout<<"element present at index "<<index<<endl;
    return 0; 
}