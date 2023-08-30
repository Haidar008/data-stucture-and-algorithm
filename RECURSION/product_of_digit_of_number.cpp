#include<iostream>
using namespace std;
int pro(int n){
    if(n%10==n) return n;
    return n%10*pro(n/10);
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int prod=pro(n);
    cout<<prod<<endl;
    return 0;
}