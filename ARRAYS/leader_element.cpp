#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void leader(int arr[], int n)
{
    cout << arr[n - 1] << " ";
    int max_till_now = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= max_till_now)
            cout << arr[i] << " ";
        max_till_now = arr[i];
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
    int arr[7] = {1111, 2, 116, 4, 99, 3, 89};
    int n = 7;
    print(arr, n);
    leader(arr, n);
}