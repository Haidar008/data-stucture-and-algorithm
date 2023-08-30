#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class twostack{
    int top1;
    int top2;
    int*arr;
    int size;
    public:
        twostack(int size){
            this->size=size;
            top1=-1;
            top2=size;
            arr=new int[size];
        }
        void push1(int key){
            if(top2-top1>1){
                top1++;
                arr[top1]=key;
            }
            else{
                cout<<"stack overflow "<<endl;
            }
        }
        void push2(int key){
            if(top2-top1>1){
                top2--;
                arr[top2]=key;
            }
            else{
                cout<<"stack overflow "<<endl;
            }
        }
        int pop1(){
            if(top1>-1){
                int val=arr[top1];
                top1--;
                return val;
            }
            else{
                cout<<"stack underflow "<<endl;
                return -1;
            }
        }
        int pop2(){
            if(top2<size){
                int val=arr[top2];
                top2++;
                return val;
            }
            else{
                cout<<"stack underflow "<<endl;
                return -1;
            }
        }
};
int main(){
    twostack st(4);
    st.push1(90);
    st.push2(67);
    st.push2(43);
    st.push1(12);
    st.push1(23);
    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
    cout<<st.pop2()<<endl;
    return 0;
}