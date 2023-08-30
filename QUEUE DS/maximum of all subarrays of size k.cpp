#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void max_element_in_every_window(int arr[], int n, int k)
{
    deque<int> d;
    for (int i = 0; i < k; i++)
    {
        while (!d.empty() && arr[d.back()] <= arr[i])
        {
            d.pop_back();
        }
        d.push_back(i);
    }
    for (int i = k; i < n; i++)
    {
        cout << arr[d.front()] << " ";
        while (!d.empty() && d.front() <= i - k)
        {
            d.pop_front();
        }
        while (!d.empty() && arr[d.back()] <= arr[i])
        {
            d.pop_back();
        }
        d.push_back(i);
    }
    cout << arr[d.front()] << " ";
}
int main()
{
    int arr[] = {12, 34, 56, 43, 23, 12, 78, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    max_element_in_every_window(arr, n, k);
    return 0;
}