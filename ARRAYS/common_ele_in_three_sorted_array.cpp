#include <iostream>
using namespace std;
void common(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
        while (i > 0 && arr1[i] == arr1[i - 1])
            i++;
        while (j > 0 && arr2[j] == arr2[j - 1])
            j++;
        while (k > 0 && arr3[k] == arr3[k - 1])
            k++;
    }
}
int main()
{
    int arr1[7] = {1, 2, 3, 3, 5, 6, 7};
    int arr2[8] = {3, 3, 5, 6, 7, 8, 9, 10};
    int arr3[7] = {3, 3, 5, 6, 7, 8, 11};
    common(arr1, arr2, arr3, 7, 8, 7);
    return 0;
}