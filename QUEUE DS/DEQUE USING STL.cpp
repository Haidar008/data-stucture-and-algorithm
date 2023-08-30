//how to use insert function in stl;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq={12,34,56,77};
    deque<int>::iterator it=dq.begin();
    dq.insert(it,45);
    dq.insert(it,2,10);
    vector<int>v(3,80);
    dq.insert(it,v.begin(),v.end());
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<"the size of deque is "<<dq.size()<<endl;
    cout<<"the max size of deque is "<<dq.max_size()<<endl;
return 0;
}
