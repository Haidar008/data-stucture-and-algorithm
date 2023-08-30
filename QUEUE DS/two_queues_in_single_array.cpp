#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class two_queues{
    int*arr;
    int front1;
    int front2;
    int rear1;
    int rear2;
    int size;
public:
    two_queues(int size){
        this->size=size;
        arr=new int[size];
        front1=-1;
        front2=size;
        rear1=-1;
        rear2=size;
    }
    void push1(int x){
        if(rear2-rear1<=1){
            cout<<"queue is full "<<endl;
            return;
        }
        if(front1==-1){
            front1=0;
            rear1=0;
            arr[rear1]=x;
        }
        else{
            rear1++;
            arr[rear1]=x;
        }
    }
    int pop1(){
        if(front1==-1){
            cout<<"queue is empty "<<endl;
            return-1;
        }
        if(front1==rear1){
            int val=arr[front1];
            front1=-1;
            rear1=-1;
            return val;
        }
        else{
            int val=arr[front1];
            front1=front1+1;
            return val;
        }
    }
    void push2(int x){
        if(rear2-rear1<=1){
            cout<<"queue is full "<<endl;
            return;
        }
        if(front2==size){
            front2=size-1;
            rear2=size-1;
            arr[rear2]=x;
        }
        else{
            rear2--;
            arr[rear2]=x;
        }
    }
    int pop2(){
        if(front2==size){
            cout<<"queue is empty()"<<endl;
            return -1;
        }
        if(front2==rear2){
            int val=arr[front2];
            front2=size;
            rear2=size;
            return val;
        }
        else{
            int val=arr[front2];
            front2=front2-1;
            return val;
        }
    }
    
};
int main(){
    two_queues q(6);
    q.push1(90);
    q.push2(67);
    q.push2(76);
    q.push2(45);
    q.push1(23);
    q.push2(34);
    q.push1(23);
    q.push2(76);

    cout<<q.pop1()<<endl;
    cout<<q.pop1()<<endl;
    cout<<q.pop1()<<endl;
    cout<<q.pop2()<<endl;
    cout<<q.pop2()<<endl;
    cout<<q.pop2()<<endl;
    cout<<q.pop2()<<endl;
    cout<<q.pop2()<<endl;
    return 0;
}