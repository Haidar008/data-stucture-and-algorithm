#include<iostream>
using namespace std;
void snake_pattern(int mat[3][3],int r,int c){
   for(int i=0;i<r;i++){
    if(i%2==0){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
    }
    else{
        for(int j=c-1;j>=0;j--){
            cout<<mat[i][j]<<" ";
        }
    }
   }
   
}
void print(int mat[3][3],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print(mat,3,3);
    snake_pattern(mat,3,3);
}