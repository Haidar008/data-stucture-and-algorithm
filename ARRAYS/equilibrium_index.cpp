#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void equilibrium_index(int arr[], int n)
{
    int leftsum = 0;
    int rightsum = 0;
    for (int i = 0; i < n; i++)
    {
        rightsum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        rightsum -= arr[i];
        if (leftsum == rightsum)
        {
            cout << i << " ";
        }
        leftsum += arr[i];
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
    int arr[12] = {6, 2, 2, 2, 3, 4, 4, 5, 3, 3, -89, 89};
    int n = 12;
    print(arr, n);
    equilibrium_index(arr, n);
}