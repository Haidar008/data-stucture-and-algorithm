#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return 3;
}
string infix_to_postfix(string str){
    stack<int>s;
    int n=str.length();
    string res="";
    for(int i=0;i<n;i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            res+=str[i];
        }
        else if(str[i]=='('){
            s.push(str[i]);
        }
        else if(str[i]==')'){
            while(!s.empty()&&s.top()!='('){
                res+=s.top();
                s.pop();
            }
            if(!s.empty()) s.pop();
        }
        else{
            while((!s.empty())&&(precedence(s.top())>=precedence(str[i]))&&(s.top()!='(')){
                res+=s.top();
                s.pop();
            }
            s.push(str[i]);
        }
    }
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }
    return res;
}
string infix_to_prefix(string exp)
{
   int n=exp.length();
    reverse(exp.begin(),exp.end());
    for(int i=0;i<n;i++){
        if(exp[i]=='('){
            exp[i]=')';
        }
        else if(exp[i]==')'){
            exp[i]='(';
        }
    }
    string prefix=infix_to_postfix(exp);
    reverse(prefix.begin(),prefix.end());
    return prefix;
}
int main()
{
    string exp = "(A+B)+C-(D-E)^F";
    cout << "The given infix expression is:" << endl;
    for (int i = 0; i < exp.length(); i++)
    {
        cout << exp[i];
    }
    cout << endl;
    string ans = infix_to_prefix(exp);
    cout << "The resultant prefix expression is " << endl;
    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
}