#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count_sort(char arr[],int n){
    int count[27]={0};
    char brr[n];
    for(int i=0;i<n;i++){
        count[arr[i]-'A']++;
    }
    for(int i=1;i<=26;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        brr[count[arr[i]-'A']-1]=arr[i];
        count[arr[i]-'A']--;
    }
    for(int i=0;i<n;i++){
        arr[i]=brr[i];
    }
}
void print(char str[],int n){
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
}
int main(){
    char str[6]={69,68,83,65,66,65};
    int n=6;
    print(str,n);
    count_sort(str,n);
    print(str,n);
}