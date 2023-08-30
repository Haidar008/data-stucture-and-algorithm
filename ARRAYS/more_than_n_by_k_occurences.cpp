#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void occurences(int arr[], int n,int k)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>n/k){
            cout<<arr[i]<<" ";
        }
        mp.erase(arr[i]);
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
    int arr[10]={1,4,3,2,2,6,4,2,4,8};
    int n=10;
    occurences(arr,n,4);
}