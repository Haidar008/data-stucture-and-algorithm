#include<iostream>
using namespace std;
int count(int n){
    if(n==0) return 0;
    if(n%2==0){
        return 1+count(n/2);
    }
    else{
        return 1+count(n-1);
    }
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER "<<endl;
    cin>>n;
    int ans=count(n);
    cout<<ans;
    return 0;
}