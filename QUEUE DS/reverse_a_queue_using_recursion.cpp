#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseq(queue<int>&q){
    if(q.empty()){
        return;
    }
    int data=q.front();
    q.pop();
    reverseq(q);
    q.push(data);
}
int main(){
    queue<int>q;

    q.push(56);
    q.push(43);
    q.push(76);
    q.push(98);
    q.push(13);

    reverseq(q);

    cout<<"after reversing "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
