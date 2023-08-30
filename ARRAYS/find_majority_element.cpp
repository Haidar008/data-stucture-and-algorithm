#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int majority(int arr[], int n)
{
    int ele = -1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            ele = arr[i];
            count++;
        }
        else
        {
            if (ele == arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            freq++;
        }
    }
    if (freq > n / 2)
        return ele;
    return -1;
}
int main()
{
    int arr[7] = {3, 2, 3, 3, 3, 2, 14};
    int n = 7;
    cout << majority(arr, n) << endl;
}