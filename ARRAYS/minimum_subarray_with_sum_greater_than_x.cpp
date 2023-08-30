#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int min_subarray(int arr[], int n, int x)
{
    int start=0;
    int sum=0;
    int min_length=INT_MAX;
    for(int i=0;i<n;i++){
        if(sum<=x){
             sum+=arr[i];
        }
        while(sum>x){
            min_length=min(min_length,i-start+1);
            sum-=arr[start];
            start++;
        }
    }
    if(min_length==INT_MAX) return 0;
    return min_length;
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
    int arr[10] = {1, 4, 3, 2, 2, 6, 4, 2, 4, 8};
    int n = 10;
    cout << min_subarray(arr, n, 10);
}