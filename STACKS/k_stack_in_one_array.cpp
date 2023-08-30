#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class kstack{
    int *arr;
    int *top;
    int *next;
    int size;
    int k,freespot,i;
    public:
        kstack(int size,int k){
            this->size=size;
            this->k=k;
            top=new int[k];
            arr=new int[size];
            next=new int[size];

            for(int i=0;i<k;i++){
                top[i]=-1;
            }
            for(int i=0;i<size-1;i++){
                next[i]=i+1;
            }
            next[size]=-1;
            freespot=0;
        }
        bool isfull(){
            if(freespot==-1) return true;
            else return false;
        }
        bool isempty(int sn){
            if(top[sn]==-1) return true;
            else return false;
        }
        void push(int key,int sn){
            if(isfull()){
                cout<<"stack overflow "<<endl;
                return;
            }
            i=freespot;
            freespot=next[i];
            next[i]=top[sn];
            top[sn]=i;
            arr[i]=key;
        }
        int pop(int sn){
            if(isempty(sn)){
                cout<<"stack underflow "<<endl;
                return -1;
            }
            i=top[sn];
            top[sn]=next[i];
            next[i]=freespot;
            freespot=i;
            return arr[i];
        }
};
int main(){
    kstack Mystack(10, 3);
    Mystack.push(12, 0);
    Mystack.push(14, 0);
    Mystack.push(15, 1);
    Mystack.push(16, 1);
    Mystack.push(17, 2);
    cout << "the popped element is " << Mystack.pop(0) << endl;
    cout << "the popped element is " << Mystack.pop(1) << endl;
    cout << "the popped element is " << Mystack.pop(2) << endl;
    cout << "the popped element is " << Mystack.pop(2) << endl;
    return 0;
}