#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minimum_diff(int arr[], int n, int m)
{
    sort(arr, arr + n);
    int mindiff = INT_MAX;
    for (int i = 0; i < n - m + 1; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        mindiff = min(diff, mindiff);
    }
    return mindiff;
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
    cout << minimum_diff(arr, n, 5);
}