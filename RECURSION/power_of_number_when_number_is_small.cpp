#include<iostream>
using namespace std;
int power(int x,int y){
    if(y==0) return 1;
    return x*power(x,y-1);
}
int main(){
    int x,y;
    cout<<"Enter two number "<<endl;
    cin>>x>>y;
    //find x to the power y (x^y)
    int pow=power(x,y);
    cout<<"THE ANSWER IS "<<pow<<endl;
    return 0;
}