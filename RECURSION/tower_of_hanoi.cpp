#include<iostream>
using namespace std;
void TOH(int n,char A,char B,char C){
    if(n==1){
        cout<<"move a disk from tower "<<A<<" to "<<C<<endl;
        return;
    }
    TOH(n-1,A,C,B);
    cout<<"move a disk from tower "<<A<<" to "<<C<<endl;
    TOH(n-1,B,A,C);
}
int main(){
    int n;
    cout<<"Enter the no of disk "<<endl;
    cin>>n;
    TOH(n,'1','2','3');
    return 0;
}