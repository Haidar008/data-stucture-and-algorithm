#include<iostream>
using namespace std;
int linear(int arr[],int n,int index,int key){
    if(index==n) return -1;
    if(arr[index]==key) return index;
    return linear(arr,n,index+1,key);
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
    int index=linear(arr,n,0,key);
    if(index==-1) cout<<"element not found "<<endl;
    else cout<<"element present at index "<<index<<endl;
    return 0; 
}
