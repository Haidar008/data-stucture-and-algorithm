#include<iostream>
using namespace std;
void print(int r,int c,int n){
    if(r==0){
        return;
    }
    if(c<=n-r){
        printf("~ ");
        print(r,c+1,n);
    }
    else{
        cout<<endl;
        print(r-1,0,n);
    }
}
int main(){
    int r;
    cout<<"ENTER THE NUMBER OF ROW "<<endl;
    cin>>r;
    print(r,0,r);
    return 0;
}