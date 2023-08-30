#include<iostream>
using namespace std;
class Deque{
    int val;
    int *arr;
    int size;
    int front;
    int rear;
    public:
    Deque(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }
    bool isfull(){
        return (front==(rear+1)%size);
    }
    bool isempty(){
        return (front==-1);
    }
    void insert_front(int x){
        if(isfull()){
            cout<<"Deque overflow,element cannot be inserted "<<endl;
            return;
        }
        if(front==-1){
            front=rear=0;
            arr[front]=x;
        }
        else if(front==0){
            front=size-1;
            arr[front]=x;
        }
        else{
            front--;
            arr[front]=x;
        }
    }
    void insert_end(int x){
        if(isfull()){
            cout<<"Deque overflow,element cannot be inserted "<<endl;
            return;
        }
        if(front==-1){
            front=rear=0;
            arr[rear]=x;
        }
        else if(rear==size-1){
            rear=0;
            arr[rear]=x;
        }
        else{
            rear++;
            arr[rear]=x;
        }
    }
    int delete_front(){
        if(isempty()){
            cout<<"Deque underflow,element cannot be deleted "<<endl;
            return -1;
        }
        val=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else front++;
        return val;
    }
    int delete_end(){
        if(isempty()){
            cout<<"Deque underflow,element cannot be deleted "<<endl;
            return -1;
        }
        val=arr[rear];
        if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
        return val;
    }
};
int main(){
    Deque dq(5);
    dq.insert_front(6);
    dq.insert_front(8);
    dq.insert_front(4);
    dq.insert_end(12);
    dq.insert_end(56);
    cout<<dq.delete_front()<<endl;
    cout<<dq.delete_end()<<endl;
    return 0;
}
