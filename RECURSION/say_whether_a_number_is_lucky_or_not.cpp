#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class lucky{
    public:
    bool iteratively(int n){
        for(int i=2;i<=n;i++){
            if(n%i==0) return false;
            n=n-n/i;
        }
        return true;
    }
    bool solve(int n,int i){
        if(i>n) return true;
        if(n%i==0) return false;
        n=n-n/i;
        return solve(n,i+1);
    }
    bool recursively(int n){
        return solve(n,2);
    }
};
int main(){
    int n;
    cout<<"Enter the lucky number "<<endl;
    cin>>n;
    lucky lc;
    bool ans1=lc.iteratively(n);
    bool ans2=lc.iteratively(n);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    return 0;
}