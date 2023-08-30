#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void interleave(queue<int>&q){
    int n=q.size();
    if(n%2!=0){
        cout<<"Please enter the enven length of queue "<<endl;
        return;
    }
    stack<int>s;
    int half=n/2;
    for(int i=0;i<half;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<half;i++){
        q.push(q.front());
        q.pop();
    }
     for(int i=0;i<half;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        q.push(q.front());
        q.pop();
        s.pop();
    }
    
}
int main(){
    int t;
    cout<<"enter the number of test cases " <<endl;
    cin>>t;
    while(t--){
        queue<int>q;
        int queries;
        while(1){
            cout<<"enter 1 if you want to push element otherwise 0 "<<endl;
            cin>>queries;
            if(queries){
                int element;
                cout<<"enter the element you want to push "<<endl;
                cin>>element;
                q.push(element);
            }
            else break;
        }
        interleave(q);
        cout<<"after interleaving :"<<endl;
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}