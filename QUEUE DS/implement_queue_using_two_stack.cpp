#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack<int>s1;
    stack<int>s2;
public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty()) return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int val=s2.top();
        s2.pop();

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return val;
    }
};
int main(){
    Queue q;
    q.push(56);
    q.push(43);
    q.push(76);
    q.push(98);
    q.push(53);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}