#include<iostream>
using namespace std;
void reverse(int n,int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    int rem=n%10;
    sum=sum*10+rem;
    reverse(n/10,sum);
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    reverse(n,0);
    return 0;
}