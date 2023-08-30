#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> next_greater_element(vector<int> &arr)
{
    // BRUTE FORCE SOLUTION   O(N^2)
    vector<int> v;
    /*for (int i = 0; i < arr.size(); i++)
    {
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                v.push_back(arr[j]);
                break;
            }
        }
        if (j == -1)
        {
            v.push_back(-1);
        }
    }
    return v;*/
    // EFFICIENT SOLUION O(N)
    stack<int> s;
    v.push_back(-1);
    s.push(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            v.push_back(-1);
            s.push(arr[i]);
        }
        else
        {
            v.push_back(s.top());
            s.push(arr[i]);
        }
    }
    return v;
}
int main()
{
    vector<int> v = {
        43,
        23,
        77,
        88,
        65,
        78,
        65,                             //NEW WAYS TO INITIALIZE VECTOR OR ARRAY;
        45,
        98,
        76,
        34,
        24,
        45,
        67,
        56,
        56,
        4,
        6,
        4,
    };
    vector<int> ans = next_greater_element(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}