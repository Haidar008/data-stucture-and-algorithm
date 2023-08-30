#include<iostream>
using namespace std;
int power(int n,int e){
    if(e==0) return 1;
    if(e%2==0){
        return power(n,e/2)*power(n,e/2);
    }
    else{
        return power(n,e/2)*power(n,e/2)*n;
    }
}
int main(){
    int n,e;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<"Enter the exponent "<<endl;
    cin>>e;
    int ans=power(6,4);
    cout<<"The answer is "<<ans<<endl;
}
