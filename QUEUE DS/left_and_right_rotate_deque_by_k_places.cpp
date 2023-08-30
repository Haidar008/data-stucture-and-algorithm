#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void left_rotate(deque<int>dq,int k){
    for(int i=0;i<k;i++){
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout<<"After left rotation elements are "<<endl;
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
}
void right_rotate(deque<int>dq,int k){
    for(int i=0;i<k;i++){
    dq.push_front(dq.back());
    dq.pop_back();
    }
    cout<<"After right rotation elements are "<<endl;
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
}
int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);
    int k;
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    left_rotate(dq,k);
    right_rotate(dq,k);
    return 0;
}