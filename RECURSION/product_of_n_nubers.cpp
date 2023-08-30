#include<iostream>
using namespace std;
int pro(int n){
    if(n==1) return 1;
    return n*pro(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int product=pro(n);
    cout<<product<<endl;
    return 0; 
}