#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> previous(int arr[], int n)
{
    stack<int> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
            v.push_back(-1);
        else
            v.push_back(s.top());
        s.push(i);
    }
    return v;
}
vector<int> next(int arr[], int n)
{
    stack<int> s;
    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
            v.push_back(n);
        else
            v.push_back(s.top());
        s.push(i);
    }
    reverse(v.begin(), v.end());
    return v;
}
int max_rect_area_histogram(int arr[], int n)
{
    vector<int> next_samller = next(arr, n);
    vector<int> prev_samller = previous(arr, n);
    int area, max_area = INT_MIN;
    int height, breadth;
    for (int i = 0; i < n; i++)
    {
        height = arr[i];
        breadth = next_samller[i] - prev_samller[i] - 1;
        area = height * breadth;
        max_area = max(area, max_area);
    }
    return max_area;
}
int main()
{
    int arr[] = {12, 3, 4, 5, 6, 5, 12, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = max_rect_area_histogram(arr, n);
    cout << "The maximum rectangular area in a histogram is " << ans << endl;
    return 0;
}