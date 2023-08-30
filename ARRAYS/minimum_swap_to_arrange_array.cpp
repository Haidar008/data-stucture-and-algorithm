#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int min_swaps(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
            count++;
    }
    int greater_than_k = 0;int min_swap=INT_MAX;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > k)
            greater_than_k++;
    }
    int min_swaps = min(min_swap,greater_than_k);
    for (int i = count; i < n; i++)
    {
        if (arr[i - count] > k)
        {
            greater_than_k--;
        }
        if (arr[i] > k)
        {
            greater_than_k++;
        }
        min_swaps = min(min_swaps, greater_than_k);
    }
    return min_swaps;
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
    cout << min_swaps(arr, n, 3);
}