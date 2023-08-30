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
int max_area_histogram(int arr[], int n)
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
int max_rec_area(vector<vector<int>> arr, int r, int c)
{
    int curr_row[c];
    for (int i = 0; i < c; i++)
    {
        curr_row[i] = arr[0][i]; // make an array of first row of matrix;updation will take place in this array only
    }
    int max_area = max_area_histogram(curr_row, c);
    for (int i = 1; i < r; i++)
    {                                // original matrix: 1 0 1      matrix after updation::1 0 1
        for (int j = 0; j < c; j++)
        {                             //                 1 1 1                             2 1 2
            if (arr[i][j] == 1)
            {                        //                  1 1 0                             3 2 0
                curr_row[j] += 1;
            }
            else if (arr[i][j] == 0)
            {
                curr_row[j] = 0;
            }
        }
        int area = max_area_histogram(curr_row, c); // after each updation of array find area
        max_area = max(area, max_area);
    }
    return max_area;
}
int main()
{
    vector<vector<int>> matrix = {{1, 0, 1}, {1, 1, 1}, {1, 1, 0}};
    int row = matrix.size();
    int col = matrix[0].size();
    int ans = max_rec_area(matrix, row, col);
    cout << "The maximum rectangular area with all ones is" << ans << endl;
    return 0;
}