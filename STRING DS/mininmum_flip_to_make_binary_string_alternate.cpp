#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min_flip(string str){
    int c1=0,c2=0;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(i%2!=0&&str[i]!='0') c1++;
        if(i%2==0&&str[i]!='1') c1++;
        if(i%2!=0&&str[i]!='1') c2++;
        if(i%2==0&&str[i]!='0') c2++;
    }
    return min(c1,c2);
}
int main(){
    string str;
    cout<<"enter the binary string "<<endl;
    cin>>str;
    int ans=min_flip(str);
    cout<<ans<<endl;
    return 0;
}
