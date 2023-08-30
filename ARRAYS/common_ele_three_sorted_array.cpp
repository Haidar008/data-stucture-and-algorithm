#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void common(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    unordered_set<int>s1,s2,s3;

    for(int i=0;i<n1;i++){
        s1.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        s2.insert(arr2[i]);
    }
    for(int i=0;i<n3;i++){
        s3.insert(arr3[i]);
    }
    for(int i=0;i<n1;i++){
        if(s2.find(arr1[i])!=s2.end()&&s3.find(arr1[i])!=s3.end()&&s1.find(arr1[i])!=s1.end()){
            cout<<arr1[i]<<" ";
        }
        s1.erase(arr1[i]);
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