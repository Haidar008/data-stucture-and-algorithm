#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_square(int n){
    n=abs(n);
    int position=0;
    int ans=0;
    int temp=n;
    while(temp!=0){
        if(temp&1==1){
            ans+=(n<<position);
        }
        position++;
        temp=temp>>1;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int square=find_square(n);
    cout<<square<<endl;
    return 0;
}