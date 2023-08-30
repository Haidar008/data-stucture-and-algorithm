#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(queue<int>&q,int k){
    if(k==0){
        return;
    }
    int a=q.front();
    q.pop();
    solve(q,k-1);
    q.push(a);
}
queue<int>reverse(queue<int>q,int k){
    int n=q.size();
    solve(q,k);
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    return q;
}
int main(){
    int t;
    cout<<"enter the number of test cases "<<endl;
    cin>>t;
    while(t--){
        queue<int>q;
        int k;
        cout<<"enter the value of k"<<endl;
        cin>>k;
        int queries;
        while(1){
            cout<<"enter 1 if you want to push element otherwise 0"<<endl;
            cin>>queries;
            if(queries){
                int element;
                cout<<"enter the value of elements you want to push:"<<endl;
                cin>>element;
                q.push(element);
            }
            else{
                break;
            }
        }
       cout<<"Before reversing:"<<endl;
        int n=q.size();
        for(int i=0;i<n;i++){
            cout<<q.front()<<" ";
            q.push(q.front());
            q.pop();
        }
        cout<<endl;
        queue<int>ans=reverse(q,k);
        cout<<"After reversing:"<<endl;
        while(!ans.empty()){
            cout<<ans.front()<<" ";
            ans.pop();
        }
        cout<<endl;
    }
    return 0;
}
