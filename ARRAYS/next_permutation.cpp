#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void next_permutation(int arr[], int n)
{
    int i;
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            break;
        }
    }
    if (i < 0)
        reverse(arr, arr + n);
    int j;
    for (j = n - 1; j < i; j--)
    {
        if (arr[i] < arr[j])
        {
            break;
        }
    }
    swap(arr[i], arr[j]);
    reverse(arr + (i + 1), arr + n);
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
    next_permutation(arr, n);
    print(arr, n);
}