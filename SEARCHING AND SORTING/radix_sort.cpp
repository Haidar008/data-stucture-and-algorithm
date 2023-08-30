#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void counting_sort(int arr[],int n,int place){
    const int maximum=10;
    int count[maximum];
    int brr[n];
    for(int i=0;i<maximum;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[(arr[i]/place)%10]++;
    }
    for(int i=1;i<maximum;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        brr[count[(arr[i]/place)%10]-1]=arr[i];
        count[(arr[i]/place)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=brr[i];
    }

}
int get_max(int arr[],int n){
    int max_element=arr[0];
    for(int i=1;i<n;i++){
        max_element=max(arr[i],max_element);
    }
    return max_element;
}
void radix_sort(int arr[],int n){
   int maxi=get_max(arr,n);
   for(int place=1;maxi/place>0;place*=10){
    counting_sort(arr,n,place);
   }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,4,3,6,4,7,58,78,98,76,5,54,3,3,2,4,55,6,7,6,5,4,4,6,8,7,6,6,5,5,5,67,88,8,8,7,6,6,55,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    radix_sort(arr,n);
    print(arr,n);
    return 0;
}