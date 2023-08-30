#include<iostream>
using namespace std;
int find_missing(int arr[],int n){
    int cd=(arr[n-1]-arr[0])/n;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if((arr[mid]-arr[0])/cd==mid){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return arr[high]+cd;
}
int main(){
    int arr[6]={1,6,11,16,26,31};
    int n=6;
    cout<<find_missing(arr,n);
    return 0;
}