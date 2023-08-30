#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(90);
    q.push(45);
    q.push(23);
    q.push(12);
    q.push(56);
    cout<<"the size of q is "<<q.size()<<endl;
    cout<<q.empty()<<endl;
    q.emplace(78);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
