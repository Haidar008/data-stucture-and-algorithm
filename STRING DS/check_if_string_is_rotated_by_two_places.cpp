#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check_rotation(string str1,string str2){
    int n1=str1.length();
    int n2=str2.length();
    if(n1!=n2) return false;
    bool clockwise=true,anticlockwise=true;
    for(int i=0;i<n1;i++){
        if(str1[i]!=str2[(i+2)%n1]){
            clockwise=false;
            break;
        }
    }
    for(int i=0;i<n2;i++){
        if(str1[(i+2)%n1]!=str2[i]){
            anticlockwise=false;
            break;
        }
    }
    return clockwise or anticlockwise;
}
int main(){
    string str1,str2;
    cout<<"enter two string "<<endl;
    cin>>str1>>str2;
    bool ans=check_rotation(str1,str2);
    if(ans){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}