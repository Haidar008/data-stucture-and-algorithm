#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> next_greater_element(vector<int> &arr)
{
    vector<int> ans;
    stack<int> s;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans.push_back(-1);
            s.push(arr[i]);
        }
        else
        {
            ans.push_back(s.top());
            s.push(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> arr = {32, 12, 54, 67, 87, 90, 98, 76, 56};
    vector<int> ans = next_greater_element(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}