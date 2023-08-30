#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int>q1;
    queue<int>q2;
    public:
    void push(int x){
        q1.push(x);
    }
    int pop(){
        if(q1.empty()) return -1;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int val=q1.front();
        q1.pop();

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return val;
    }
};
int main(){
    Stack st;
    st.push(87);
    st.push(90);
    st.push(12);
    st.push(34);
    st.push(56);

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    return 0;
}