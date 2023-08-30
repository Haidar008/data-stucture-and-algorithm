#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int remove(int arr[], int n)
{
    int index = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
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
    n = remove(arr, n);
    print(arr, n);
}