#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int subarray(int arr[], int n)
{
    int pro=1;
    int max_pro=INT_MIN;
    for(int i=0;i<n;i++){
        pro*=arr[i];
         max_pro=max(pro,max_pro);
        if(pro==0){
            pro=1;
        }
       
    }
    pro=1;
    for(int i=n-1;i>=0;i--){
        pro*=arr[i];
        max_pro=max(pro,max_pro);
        if(pro==0){
            pro=1;
        }
    }
    return max_pro;
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
    int arr[5] = {1, 2, -4, 3, 5};
    int n = 5;
    print(arr, n);
    cout << subarray(arr, n) << endl;
    return 0;
}