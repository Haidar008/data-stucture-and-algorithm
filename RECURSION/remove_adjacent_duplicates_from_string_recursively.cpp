#include<iostream>
using namespace std;
string remove_duplicate(string str){
    int n=str.length();
    if(n==0||n==1){
        return str;
    }
    if(str[0]==str[1]){
        int index=0;
        while(str[0]==str[index]&&index<n){
            index++;
        }
        return str[0]+remove_duplicate(str.substr(index));
    }
    else{
        return str[0]+remove_duplicate(str.substr(1));
    }
}
int main(){
    string str;
    cout<<"ENTERT THE STRING "<<endl;
    cin>>str;
    string ans=remove_duplicate(str);
    cout<<ans<<endl;
    return 0;
}