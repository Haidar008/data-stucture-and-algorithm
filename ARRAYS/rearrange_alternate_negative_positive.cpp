#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    int j=0,i;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    j=0;
    for(i=0;i<n;i++){
        if(arr[i]<0) break;
    }
    while(i<n){
        swap(arr[i],arr[j]);
        j+=2;
        i++;
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
    int arr[6] = {1,2,-3,-4,-1,4};
    int n = 6;
    print(arr, n);
    rearrange(arr, n);
    print(arr, n);
}