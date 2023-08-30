#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class String{
    public:
char get_max_char(int count[]){
    int maxi=0;
    char ch;
    for(int i=0;i<26;i++){
        if(count[i]>maxi){
            maxi=count[i];
            ch=i+'a';
        }
    }
    return ch;
}
string rearrange_string(string str){
    int n=str.length();
    int count[26]={0};
    for(int i=0;i<n;i++){
        count[str[i]-'a']++;
    }
    char max_ch=get_max_char(count);
    int max_count=count[max_ch-'a'];
    char res[n];
    int idx=0;
    if(max_count>(n+1)/2) return "-1";
    while(max_count--){
        res[idx]=max_ch;
        idx=idx+2;
    }
    count[max_ch-'a']=0;
    for(int i=0;i<26;i++){
        while(count[i]>0){
            idx=(idx>=n)?1:idx;
            res[idx]=i+'a';
            count[i]--;
            idx=idx+2;
        }
    }
    string ans="";
    for(int i=0;i<n;i++){
        ans+=res[i];
    }
    return ans;
}
void print_string(string str){
    int n=str.length();
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
    cout<<endl;
}
};
int main(){
    String s;
    string str;
    cout<<"enter the string "<<endl;
    cin>>str;
    cout<<"before arranging "<<endl;
    s.print_string(str);
    string ans=s.rearrange_string(str);
    cout<<"after arranging "<<endl;
    s.print_string(ans);
    return 0;
}