#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    int min_element;
    stack<int>s;
    public:
        void push(int key){
            if(s.empty()){
                s.push(key);
                min_element=key;
                return;
            }
            if(key>=min_element){
                s.push(key);
            }
            else{
                s.push(2*key-min_element);
                min_element=key;
            }
        }
        int pop(){
            if(s.empty()) return -1;
            int x=s.top();
            s.pop();
            if(x<min_element){
                int val=min_element;
                min_element=2*min_element-x;
                return val;
            }
            else{
                return x;
            }
        }
        int peek(){
            if(s.empty()) return -1;
            if(s.top()<min_element){
                return min_element;
            }
            else{
                return s.top();
            }
        }
        int get_min(){
            if(s.empty()) return -1;
            else return min_element;
        }
};
int main(){
    Stack st;
    st.push(78);
    cout<<st.get_min()<<endl;
    st.push(34);
    cout<<st.get_min()<<endl;
    st.push(23);
    cout<<st.get_min()<<endl;
    st.push(1);
    cout<<st.get_min()<<endl;
    st.push(5);
    cout<<st.get_min()<<endl;
    
    cout<<st.pop()<<endl;
    cout<<st.get_min()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.get_min()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.get_min()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.get_min()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.get_min()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.get_min()<<endl;
}