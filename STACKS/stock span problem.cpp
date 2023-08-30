#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> stock_span(int arr[], int n)
{
    /*vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int length = 1;
        for (int j = i-1; j >=0; j--)               //BRUTE FORCE SOLUTION
        {
            if (arr[j] < arr[i])
            {
                length++;
            }
            else{
                break;
            }
        }
        v.push_back(length);
    }
    return v;*/
    stack<int> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            v.push_back(i + 1);
        }
        else
        {
            v.push_back(i - s.top());
        }
        s.push(i);
    }
    return v;
}
int main()
{
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = stock_span(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}