#include<iostream>
using namespace std;
void remove_ch(string str,int i,string ans,char ch){
    if(i==str.length()){
        cout<<ans<<endl;
        return;
    }
    if(str[i]==ch){
        remove_ch(str,i+1,ans,ch);
    }
    else{
        ans+=str[i];
        remove_ch(str,i+1,ans,ch);
    }
}
int main(){
    string str;
    cout<<"ENTER THE STRING "<<endl;
    cin>>str;
    char ch;
    cout<<"ENTER THE CHARACTER YOU WANT TO SKIP "<<endl;
    cin>>ch;
    string ans="";
    remove_ch(str,0,ans,ch);
    return 0;
}