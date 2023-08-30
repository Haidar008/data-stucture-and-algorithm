#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void segregate(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (arr[i] < 0 && arr[j] < 0)
        {
            i++;
        }
        else if (arr[i] < 0 && arr[j] > 0)
        {
            i++;
            j--;
        }
        else if (arr[i] > 0 && arr[j] < 0)
        {
            swap(arr[i], arr[j]);
            j--;
            i++;
        }
        else
        {
            j--;
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
    int arr[8] = {-1, 2, -3, 4, -5, 3, 89, -67};
    int n = 8;
    print(arr, n);
    segregate(arr, n);
    print(arr, n);
}