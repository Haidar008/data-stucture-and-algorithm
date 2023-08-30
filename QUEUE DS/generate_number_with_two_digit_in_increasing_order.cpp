#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generate_number(int n){
    //let the two digit be 5 and 6;
    queue<string>q;
    q.push("5");
    q.push("6");
    for(int i=1;i<=n;i++){
        string temp=q.front();
        cout<<temp<<" ";
        q.pop();
        q.push(temp+"5");
        q.push(temp+"6");
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    generate_number(n);
    return 0;
}