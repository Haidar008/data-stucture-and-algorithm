#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 5
class circularqueue{
    int arr[size];
    int front;
    int rear;
public:
    circularqueue(){
        front=-1;
        rear=-1;
    }
    bool isfull(){
        return ((front==0&&rear==size-1)||(front==rear+1));
    }
    bool isempty(){
        return(front==-1);
    }
    void enqueue(int x){
        if(isfull()){
            cout<<"queue overflow"<<endl;
            return;
        }
        else if(front==-1){
            front=0;
            rear=0;
            arr[rear]=x;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
        }
    }
    int Dequeue(){
        if(isempty()){
            cout<<"queue underflow"<<endl;
            return -1;
        }
        int val=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%size;
        }
        return val;
    }
    void display(){
        int i;
        for(i=front;i!=rear;i=(i+1)%size){
            cout<<arr[i]<<" ";
        }
        cout<<arr[i]<<endl;
    }
};
int main(){
    circularqueue cq;
    cq.enqueue(108);
    cq.enqueue(98);
    cq.enqueue(52);
    cq.enqueue(36);
    cq.enqueue(56);
    cq.enqueue(86);
    cout<<cq.Dequeue()<<endl;
    cq.enqueue(114);

    cq.display();

    cout<<cq.Dequeue()<<endl;
    cout<<cq.Dequeue()<<endl;
    cout<<cq.Dequeue()<<endl;
    cout<<cq.Dequeue()<<endl;
    cout<<cq.Dequeue()<<endl;
    cout<<cq.Dequeue()<<endl;
    return 0;
}