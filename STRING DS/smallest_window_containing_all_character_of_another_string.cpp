#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string smallest_window(string str1,string str2){
    unordered_map<char,int>mp1,mp2;
    for(int i=0;i<str2.length();i++){
        mp2[str2[i]]++;
    }
    int dmct=str2.length();
    int mct=0;
    int i=0;
    int j=0;
    string ans="-1";
    string pans;
    while(true){
        bool f1=false;
        bool f2=false;
        while(i<str1.length()&&mct<dmct){
            mp1[str1[i]]++;
            if(mp1[str1[i]]<=mp2[str1[i]]){
                mct++;
            }
            i++;
            f1=true;
        }
        while(j<i&&mct==dmct){
            pans=str1.substr(j,i-j);
            if(ans=="-1"||pans.length()<ans.length()){
                ans=pans;
            }
            if(mp1[str1[j]]==1){
                mp1.erase(str1[j]);
            }
            else{
                mp1[str1[j]]--;
            }
            if(mp1[str1[j]]<mp2[str1[j]]){
                mct--;
            }
            j++;
            f2=true;
        }
        if(f1==false&&f2==false){
            break;
        }
    }
    return ans;
}
int main(){
    string str1,str2;
    cout<<"Enter two string one by one "<<endl;
    cin>>str1>>str2;
    string ans=smallest_window(str1,str2);
    cout<<"The smallest window is "<<ans<<endl;
    return 0;
}