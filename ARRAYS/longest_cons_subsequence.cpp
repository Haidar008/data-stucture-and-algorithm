#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int subsequence(int arr[], int n)
{
    int start;
    int max_count=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)!=s.end()){
            continue;
        }
        else{
            start=arr[i];
            int count=0;
            while(s.find(start)!=s.end()){
                count++;
                start++;
            }
            max_count=max(count,max_count);
        }
    }
    return max_count;
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
    int arr[10]={1,4,3,2,5,6,4,2,7,8};
    int n=10;
    cout<<subsequence(arr,n);
}