#include<iostream>
using namespace std;
void rev(int n,int t,int sum){
    if(n==0){
        if(sum==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    sum=sum*10+n%10;
    rev(n/10,t,sum);
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER "<<endl;
    cin>>n;
    rev(n,n,0);
    return 0;
}