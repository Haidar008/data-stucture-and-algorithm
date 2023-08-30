#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 7//maxsize
int hs=-1;    //heapsize
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
void push(int arr[],int ele){
    hs=hs+1;
    if(hs==size){
        cout<<"Heap overflow,element cannot be inserted"<<endl;
        return;
    }
    arr[hs]=ele;
    int i=hs;
    while(i>0&&arr[i/2]<arr[i]){
        swap(arr[i],arr[i/2]);
        i=i/2;
    }
}
int pop(int arr[]){
    if(hs==-1) {
        cout<<"Heap underflow,element cannot be popped"<<endl;
        return -1;
    }
    int val=arr[0];
    arr[0]=arr[hs];
    hs=hs-1;
    heapify(arr,hs,0);
    return val;
}
int main(){
    int arr[size];
    int ch,ans;
    while(true){
        cout<<"Enter your choice "<<endl;
        cout<<"1.push 2.pop 0.terminate "<<endl;
        cin>>ch;
        switch(ch){
            case 0:
                exit(0);
            case 1:
                int key;
                cout<<"Enter key you want to push "<<endl;
                cin>>key;
                push(arr,key);
                break;
            case 2:
                ans=pop(arr);
                cout<<"The popped element is "<<ans<<endl;
                break;
            default:
                cout<<"Please enter valid key "<<endl;
                break;
        }
    }
    return 0;
}