#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void modify_matrix(int mat[3][3],int r,int c){
    int row[r]={0};
    int col[c]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]==1){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(row[i]==1){
                mat[i][j]=1;         
        }
        if(col[j]==1){
            mat[i][j]=1;
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