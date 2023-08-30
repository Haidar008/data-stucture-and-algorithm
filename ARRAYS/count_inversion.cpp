#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int merge(int arr[], int left, int mid, int right)
{
    int brr[right + 1];
    int i = left;
    int j = mid + 1;
    int k = left;
    int count = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            brr[k++] = arr[i++];
        }
        else
        {
            brr[k++] = arr[j++];
            count += (mid + 1 - i);
        }
    }
    while (i <= mid)
    {
        brr[k++] = arr[i++];
    }
    while (j <= right)
    {
        brr[k++] = arr[j++];
    }
    for (int i = left; i <= right; i++)
    {
        arr[i] = brr[i];
    }
    return count;
}
int mergesort(int arr[], int left, int right)
{
    int count = 0;
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        count += mergesort(arr, left, mid);
        count += mergesort(arr, mid + 1, right);
        count += merge(arr, left, mid, right);
    }
    return count;
}
int count_inversion(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int count = mergesort(arr, left, right);
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
    int arr[5] = {1, 4,6, 3, 5};
    int n = 5;
    print(arr, n);
    int ans = count_inversion(arr, n);
    cout << ans << endl;
}