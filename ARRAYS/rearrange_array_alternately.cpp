#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    int max_element = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_element = max(arr[i], max_element);
    }
    int maxi = max_element + 1;
    int max_index = n - 1;
    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += (arr[max_index] % maxi) * maxi;
            max_index--;
        }
        else
        {
            arr[i] += (arr[min_index] % maxi) * maxi;
            min_index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] /= maxi;
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
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    print(arr, n);
    rearrange(arr, n);
    print(arr, n);
}