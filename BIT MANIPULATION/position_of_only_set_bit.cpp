#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool power_2(int n){
    int count_Set_Bit=0;
    int RMSB;
    while(n!=0){
        count_Set_Bit++;
        RMSB=n&(~n+1);
        n=n-RMSB;
    }
    if(count_Set_Bit==1) return true;
    else return false;
}
int find_position(int n){
    if(!power_2(n)){
        return -1;
    }
    else{
        int position=1;
        while(n!=0){
            if(n&1==1) return position;
            position++;
            n=n>>1;
        }
    }
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<find_position(n);
    return 0;
}