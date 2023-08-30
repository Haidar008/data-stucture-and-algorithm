#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n, int k)
{
    for (int i = 0; i < n; i = i + k)
    {
        int start = i;
        int end = min(i + k - 1, n - 1);
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
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
    int arr[8] = {1, 2, 3, 4, 5, 3, 89, 67};
    int n = 8;
    print(arr, n);
    reverse(arr, n, 3);
    print(arr, n);
}