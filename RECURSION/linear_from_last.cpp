#include<iostream>
using namespace std;
int linear(int arr[],int n,int end,int key){
    if(end<0) return -1;
    if(arr[end]==key) return end;
    return linear(arr,n,end-1,key);
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
    int index=linear(arr,n,n-1,key);
    if(index==-1) cout<<"element not found "<<endl;
    else cout<<"element present at index "<<index<<endl;
    return 0; 
}
