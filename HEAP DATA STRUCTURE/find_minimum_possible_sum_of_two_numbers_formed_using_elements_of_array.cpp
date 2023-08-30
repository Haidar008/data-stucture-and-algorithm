#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calculate(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            a=a*10+arr[i];
        }
        else{
            b=b*10+arr[i];
        }
    }
    return a+b;
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"Enter the elements into array "<<endl;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    int min_sum=calculate(arr,n);
    cout<<"The minimum sum possible is "<<min_sum<<endl;
    return 0;
}