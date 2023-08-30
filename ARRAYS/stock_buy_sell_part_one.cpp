#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_profit(int arr[], int n)
{
    int mintillnow=arr[0];
    int max_profit=INT_MIN;
    for(int i=1;i<n;i++){
        int profit=arr[i]-mintillnow;
        max_profit=max(profit,max_profit);
        mintillnow=min(mintillnow,arr[i]);
    }
    return max_profit;
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
    int arr[5] = {1, 2, 2, 3, 1};
    int n = 5;
    print(arr, n);
    int ans=max_profit(arr, n);
    cout<<ans;
    
}