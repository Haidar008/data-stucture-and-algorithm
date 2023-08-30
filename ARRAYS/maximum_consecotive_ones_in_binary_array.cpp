#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_1(int arr[], int n)
{
    int count = 0;
    int max_count = 0;
    for (int i = -0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            max_count = max(count, max_count);
        }
        else
        {
            count = 0;
        }
    }
    return max_count;
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
    int arr[15] = {1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1};
    int n = 15;
    print(arr, n);
    cout << max_1(arr, n) << endl;
}