#include <iostream>
using namespace std;
void unioni(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (i > 0 && arr1[i - 1] == arr1[i])
        {
            i++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int arr1[10] = {1, 2, 2, 3, 3, 4, 4, 5, 6, 7};
    int arr2[7] = {3, 4, 5, 6, 7, 9, 12};
    unioni(arr1, arr2, 10, 7);
}
