#include<iostream>
using namespace std;
int find_sum(int n){
    if(n==0){
        return 0;
    }
    return n+find_sum(n-1);
}
int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int sum=find_sum(n);
    cout<<sum<<endl;
    return 0;
}