#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void interleave(queue<int>&q){
    int n=q.size();
    int half=n/2;
    if(n%2!=0){
        cout<<"enter the even length of queue "<<endl;
        return;
    }
    queue<int>tempq;
    for(int i=0;i<half;i++){
        tempq.push(q.front());
        q.pop();    
    }

    while(!tempq.empty()){
        q.push(tempq.front());
        q.push(q.front());
        q.pop();
        tempq.pop();
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

