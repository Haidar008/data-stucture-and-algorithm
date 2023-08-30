#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string into_number(string str,int n){
    string output="";
    string arr[26]={"2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999"};
            cout<<str[3]<<endl;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            output+='0';
        }
        else{
            int index=str[i]-'A';
            output+=arr[index];
        }
    }
    return output;
}
int main(){
    string sentence;
    int n;
    cout<<"enter the length of sentence"<<endl;
    cin>>n;
    cout<<"Enter a sentence of length "<<n<<endl;
    cin>>sentence;
    string ans=into_number(sentence,n);
    for(int i=0;i<ans.length();i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}