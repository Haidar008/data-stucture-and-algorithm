//example:
//arr={1,2,3,4,5,6,7,8}
//op={1,5,2,6,3,7,4,8}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_max(int arr[],int n){
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
        max_ele=max(arr[i],max_ele);
    }
    return max_ele;
}
void arrange(int arr[],int n){
    int max_ele=find_max(arr,n);
    int maxi=max_ele+1;
    int low=0;
    int high=n/2;

    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=(arr[low]%maxi)*maxi;
            low++;
        }
        else{
            arr[i]+=(arr[high]%maxi)*maxi;
            high++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]/maxi;
    }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the even size of array "<<endl;
    cin>>n;
    cout<<"Enter the elements into the array "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before arranging "<<endl;
    print_array(arr,n);
    arrange(arr,n);
    cout<<"After arranging "<<endl;
    print_array(arr,n);
    return 0;
}