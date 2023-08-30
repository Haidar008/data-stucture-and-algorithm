#include<iostream>
using namespace std;
void rotate(int mat[3][3],int r,int c){
   
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<r/2;i++){
        for(int j=0;j<c;j++){
            swap(mat[i][j],mat[3-i-1][j]);
        }
    }
}
void print(int mat[3][3],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print(mat,3,3);
    rotate(mat,3,3);
    print(mat,3,3);
}