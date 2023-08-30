#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check_shuffle(string str1,string str2,string res){
    int l1=str1.length();
    int l2=str2.length();
    int lr=res.length();
    if((l1+l2)!=lr) return false;
        int i=0,j=0,k=0;
        while(k<lr){
            if(i<l1&&str1[i]==res[k]){
                i++;
            }
            else if(j<l2&&str2[j]==res[k]){
                j++;
            }
            else{
                return false;
            }
            k++;
        }
        if(i<l1||j<l2) return false;
        else return true;
}
int main(){
    string s1,s2,res;
    cout<<"enter the three string"<<endl;
    cin>>s1>>s2>>res;
    if(check_shuffle(s1,s2,res)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}