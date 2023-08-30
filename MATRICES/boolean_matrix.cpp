#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void modify_matrix(int mat[3][3],int r,int c){
    int temp[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            temp[i][j]=mat[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(temp[i][j]==1){
                for(int k=0;k<r;k++){
                    mat[i][k]=1;
                }
                for(int l=0;l<c;l++){
                    mat[l][j]=1;
                }
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
    int mat[3][3]={{0,0,0},{0,1,1},{0,0,1}};
    print(mat,3,3);
    modify_matrix(mat,3,3);
    print(mat,3,3);
}