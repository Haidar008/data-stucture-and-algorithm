#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 5
class Queue{
    int arr[size];
    int front;
    int rear;
public:
    Queue(){
        front=-1;
        rear=-1;
    }
    bool isfull(){
        return (rear==size-1);
    }
    bool isempty(){
        return (front==-1);
    }
    void push(int x){
        if(isfull()){
            cout<<"queue overflow "<<endl;
            return;
        }
        else if(front==-1){
            front=0;
            rear=0;
            arr[rear]=x;
        }
        else{
            rear++;
            arr[rear]=x;
        }
    }
    int pop(){
        if(isempty()){
            cout<<"stack underflow "<<endl;
            return-1;
        }
        else if(front==rear){
            int val=arr[front];
            front=-1;
            rear=-1;
            return val;
        }
        else{
            int val=arr[front];
            front++;
            return val;
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(78);
    q.push(45);
    q.push(34);
    q.push(23);
    q.push(98);
    q.push(61);

    cout<<q.pop()<<endl;

    q.display();

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}