#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count_pair(int arr[], int n,int sum)
{
    unordered_map<int,int>mp;
    int count=0;
    for(int i=0;i<n;i++){
        if(mp.find(sum-arr[i])!=mp.end()){
            count+=mp[sum-arr[i]];
        }
        mp[arr[i]]++;
    }  
    return count;
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
    int arr[5] = {1, 2, 4, 3, 5};
    int n = 5;
    print(arr, n);
    cout<<count_pair(arr, n,6)<<endl;
   
}