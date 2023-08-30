#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class k_queues{
    int*arr;
    int*front;
    int*rear;
    int*next;
    int size;
    int k,free;
public:
    k_queues(int size,int k){
        this->size=size;
        this->k=k;
        arr=new int[size];
        front=new int[k];
        rear=new int[k];
        next=new int[size];
        free=0;
        int n=size;
        for(int i=0;i<k;i++){
            front[i]=-1;
        }
        for(int i=0;i<n-1;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
    }
    bool isfull(){
        return (free==-1);
    }
    bool isempty(int qn){
        return (front[qn]==-1);
    }
    void push(int key,int qn){
        if(isfull()){
            cout<<"queue is full "<<endl;
            return;
        }
        int i=free;
        free=next[i];
        if(isempty(qn)){
            front[qn]=i;
        }
        else{
            next[rear[qn]]=i;
        }
        next[i]=-1;
        rear[qn]=i;
        arr[i]=key;
    }
    int pop(int qn){
        if(isempty(qn)){
            cout<<"queue is empty "<<endl;
            return -1;
        }
        int i=front[qn];
        front[qn]=next[i];
        next[i]=free;
        free=i;
        return arr[i];
    }

};
int main(){
    int k=3,n=10;
    k_queues kq(n,k);
    kq.push(15,2);
    kq.push(45,2);

    kq.push(17,1);
    kq.push(49,1);
    kq.push(39,1);

    kq.push(11,0);
    kq.push(9,0);
    kq.push(7,0);

    cout << "Dequeued element from queue 2 is " << kq.pop(2) << endl;
    cout << "Dequeued element from queue 1 is " << kq.pop(1) << endl;
    cout << "Dequeued element from queue 0 is " << kq.pop(0) << endl;

    return 0;
}