#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool parenthesis_matching(string str)
{
    int n = str.length();
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (!s.empty() && s.top() == '(')
                s.pop();
            else
                return false;
        }
        else if (str[i] == '}')
        {
            if (!s.empty() && s.top() == '{')
                s.pop();
            else
                return false;
        }
        else
        {
            if (!s.empty() && s.top() == '[')
                s.pop();
            else
                return false;
        }
    }
    if (s.empty())
        return true;
    else
        return false;
}
int main()
{
    string str1 = "({}{})][";
    string str2 = "({[]})";
    if (parenthesis_matching(str1))
        cout << "string 1 is Balanced" << endl;
    else
        cout << "string 1 is Not Balanced" << endl;
    if (parenthesis_matching(str2))
        cout << "string 2 is Balanced" << endl;
    else
        cout << "string 2 is Not Balanced" << endl;
    return 0;
}