#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> maxofmin(int arr[], int n)
{
    stack<int> s;
    vector<int> ps;
    vector<int> ns;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
            ps.push_back(-1);
        else
            ps.push_back(s.top());
        s.push(i);
    }
    while (!s.empty())
    {
        s.pop();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
            ns.push_back(n);
        else
            ns.push_back(s.top());
        s.push(i);
    }
    reverse(ns.begin(), ns.end());

    vector<int> ans(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int ws = ns[i] - ps[i] - 1;
        ans[ws] = max(ans[ws], arr[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = max(ans[i], ans[i + 1]);
    }
    ans.erase(ans.begin());
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 50, 10, 70, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = maxofmin(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}