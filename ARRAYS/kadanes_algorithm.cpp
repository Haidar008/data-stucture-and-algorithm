#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_subarray_sum(int arr[], int n)
{
    int i;
    int max_element = INT_MIN;
    for (i = 0; i < n; i++)
    {
        max_element = max(max_element, arr[i]);
        if (arr[i] >= 0)
            break;
    }
    if (i == n)
        return max_element;

    int sum = 0;
    int max_sum = INT_MIN;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        max_sum = max(sum, max_sum);
    }
    return max_sum;
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
    int arr[12] = {1, 2, 2, 2, 3, 4, 4, 5, 3, 3, -89, 89};
    int n = 12;
    print(arr, n);
    cout << max_subarray_sum(arr, n) << endl;
}