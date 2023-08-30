#include<iostream>
using namespace std;
string remove_ch(string str,char ch){
    if(str.length()==0){
        return "";
    }
    if(str[0]==ch){
        return remove_ch(str.substr(1),ch);
    }
    else{
        return str[0]+remove_ch(str.substr(1),ch);
    }
}
int main(){
    string str;
    cout<<"ENTER THE STRING "<<endl;
    cin>>str;
    char ch;
    cout<<"ENTER THE CHARRACTER YOU WANT TO SKIP "<<endl;
    cin>>ch;
    string ans=remove_ch(str,ch);
    return 0;
}