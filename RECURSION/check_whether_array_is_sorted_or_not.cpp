#include<iostream>
using namespace std;
bool issorted(int arr[],int n,int indx){
    if(indx==n-1) return true;
    if(arr[indx]>arr[indx+1]) return false;
    return issorted(arr,n,indx+1);
}
int main(){
    int n;
    cout<<"ENTER THE NO OF ELEMENTS "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS INTO THE ARRAY "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=issorted(arr,n,0);
    if(ans) cout<<"ARRAY IS SORTED "<<endl;
    else cout<<"ARRAY IS NOT SORTED "<<endl;
    return 0;
}