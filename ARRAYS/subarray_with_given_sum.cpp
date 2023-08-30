#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subarray_with_given_sum(int arr[], int n,int k)
{
    int i;
    int sum=arr[0];
    int start=0;
    for(i=1;i<n;i++){
        if(sum<k){
            sum+=arr[i];
        }
        while(sum>k){
            sum-=arr[start];
            start++;
        }
        if(sum==k){
            break;
        }
    }
    for(int j=start;j<=i;j++){
        cout<<arr[j]<<" ";
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[12] = {1, 2, 2, 2, 3, 4, 4, 5, 3, 3, -89, 89};
    int n = 12;
    print(arr, n);
    subarray_with_given_sum(arr,n,15);
    return 0;
}