#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimum_platform_needed(int arr[],int dep[],int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int platform=1;
    int maximum_platform_needed_at_particular_time=1;
    int i=1;
    int j=0;
    while(i<n&&j<n){
        if(arr[i]<=dep[j]){
            platform++;
            i++;
        }
        else{
            platform--;
            j++;
        }
        maximum_platform_needed_at_particular_time=max(maximum_platform_needed_at_particular_time,platform);
    }
    return maximum_platform_needed_at_particular_time;
}
int main(){
    int arr[6]={900,940,950,1100,1500,1800};
    int dep[6]={910,1200,1120,1130,1900,2000};
    int n=6;
    cout<<minimum_platform_needed(arr,dep,n);
    return 0;
}