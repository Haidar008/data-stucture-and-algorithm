#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void frequency(int arr[], int n)
{
    int freq = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
        }
        else
        {
            cout << arr[i-1] << "=" << freq << endl;
            freq = 1;
        }
    }
    cout << arr[n - 1] << "=" << freq << endl;
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
    int arr[12] = {1, 2, 2, 2, 3, 4, 4, 5, 3, 3, 89, 89};
    int n = 12;
    print(arr, n);
    frequency(arr, n);
}