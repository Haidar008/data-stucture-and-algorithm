#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort_3(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high--]);
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
    int arr[10] = {1, 0, 2, 1, 2, 0, 1, 2, 2, 0};
    int n = 10;
    print(arr, n);
    sort_3(arr, n);
    print(arr, n);
}