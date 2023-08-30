#include<iostream>
using namespace std;
void rotate(int mat[3][3],int r,int c){
    int temp[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            temp[3-j-1][i]=mat[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mat[i][j]=temp[i][j];
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