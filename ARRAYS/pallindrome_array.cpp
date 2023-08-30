#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool pallindrome(int arr[], int n)
{
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int rev=0;
        int rem;
        while(temp!=0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev!=arr[i]) return false;
    }
    return true;
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
    int arr[10] = {1, 4, 3, 2, 2, 66, 4, 2, 4, 88};
    int n = 10;
    cout << pallindrome(arr, n);
}