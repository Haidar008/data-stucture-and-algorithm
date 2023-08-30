#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int triplet(int arr[],int n,int sum){
    int count=0;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            if(arr[i]+arr[low]+arr[high]<sum){
                count+=high-low;
                low++;
            }
            else{
                high--;
            }
        }
    }
    return count;
}
int main(){
    int arr[6]={1,4,3,6,5,2};
    int n=6;
    int sum=8;
    int count=triplet(arr,n,sum);
    cout<<count<<endl;
    return 0;
}