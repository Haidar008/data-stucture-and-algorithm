#include<iostream>
using namespace std;
int sd(int n){
    if(n==0) {
        return 0;
    }
    
    return n%10+sd(n/10);
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int sum=sd(n);
    cout<<sum<<endl;
    return 0;
}