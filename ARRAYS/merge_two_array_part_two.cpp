#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    int k=n-1;
    while (i <=k&&j<m)
    {
        if (arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            swap(arr1[k], arr2[j]);
            k--;
            j++;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
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
    int arr1[10] = {1, 2, 2, 3, 3, 4, 4, 5, 6, 7};
    int arr2[7] = {3, 4, 5, 6, 7, 9, 12};
    merge(arr1, arr2, 10, 7);
    print(arr1, 10);
    print(arr2, 7);
}
