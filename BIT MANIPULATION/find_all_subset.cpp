#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void powerset(string str,int n){
    int no_of_set=pow(2,n)-1;
    vector<string>v;
    for(int i=1;i<=no_of_set;i++){
        int N=i;
        int index=0;
        string c="";
        while(N!=0){
            if(N&1==1){
                c=c+str[index];
            }
            index++;
            N=N>>1;
        }
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    string str="abc";
    int n=str.length();
    powerset(str,n);
    return 0;
}