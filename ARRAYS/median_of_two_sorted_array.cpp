#include <iostream>
using namespace std;
int median(int arr1[], int arr2[], int n, int m)
{
    int mid1 = -1, mid2 = -1, count = 0;
    int i = 0, j = 0;
    while (count <= (m + n) / 2)
    {
        mid2 = mid1;
        if (i < n && j < m)
        {
            if (arr1[i] <= arr2[j])
            {
                mid1 = arr1[i++];
            }
            else
            {
                mid1 = arr2[j++];
            }
        }
        else if (i < n)
        {
            mid1 = arr1[i++];
        }
        else if (j < m)
        {
            mid1 = arr2[j++];
        }
        count++;
    }
    if ((m + n) % 2 == 0)
        return (mid1 + mid2) / 2;
    else
        return mid1;
}
int main()
{
    int arr1[10] = {1, 2, 2, 3, 3, 4, 4, 5, 6, 7};
    int arr2[7] = {3, 4, 5, 6, 7, 9, 12};
    cout << median(arr1, arr2, 10, 7);
}
