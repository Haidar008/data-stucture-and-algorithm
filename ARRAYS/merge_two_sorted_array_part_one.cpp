#include <iostream>
using namespace std;
void keep_sorted_arr2(int arr2[], int m)
{
    for (int i = 1; i < m; i++)
    {
        if (arr2[i] < arr2[i - 1])
        {
            swap(arr2[i], arr2[i - 1]);
        }
    }
}
void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (arr1[i] <= arr2[j])
        {
            i++;
        }
        else
        {
            swap(arr1[i], arr2[j]);
            i++;
        }
        keep_sorted_arr2(arr2, m);
    }
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
