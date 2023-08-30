#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool subarray(int arr[], int n)
{
    unordered_set<int> s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0 || s.find(sum) != s.end())
            return true;
        s.insert(sum);
    }
    return false;
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
    int arr[5] = {1, 2, 4, 3, 5};
    int n = 5;
    print(arr, n);
    cout << subarray(arr, n) << endl;
    return 0;
}