#include<iostream>
using namespace std;
void print(int r,int c){
    if(r==0){
        return;
    }
    if(c<r){
        printf("~ ");
        print(r,c+1);
    }
    else{
        cout<<endl;
        print(r-1,0);
    }
}
int main(){
    int r;
    cout<<"ENTER THE NUMBER OF ROW "<<endl;
    cin>>r;
    print(r,0);
    return 0;
}