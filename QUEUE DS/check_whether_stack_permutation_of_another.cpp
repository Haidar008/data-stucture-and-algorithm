#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int brr[],int n){
    stack<int>s;
    int index=0;
    for(int i=0;i<n;i++){
        s.push(arr[i]);
        while(!s.empty()&&s.top()==brr[index]){
            s.pop();
            index++;
        }
    }
    return (s.empty());
}
int main(){
    int arr[3]={1,2,3};
    int brr[3]={2,1,3};
    int n=3;
    if(check(arr,brr,n)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}