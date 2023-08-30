#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct intervals
{
    int start;
    int end;
};
bool mycomp(intervals a, intervals b)
{
    return (a.start<b.start);
}
void mergeintervals(intervals arr[], int n)
{
    sort(arr, arr + n, mycomp);
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[index].end >= arr[i].start)
        {
            arr[index].end = max(arr[index].end, arr[i].end);
        }
        else
        {
            index++;
            arr[index] = arr[i];
        }
    }
    for (int i = 0; i <=index; i++)
    {
        cout << "[" << arr[i].start << "," << arr[i].end << "]"
             << " ";
    }
}
int main()
{
    intervals arr[4] = {{1, 5}, {3, 5}, {6, 7}, {7, 9}};
    mergeintervals(arr, 4);
    return 0;
}