#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void row_with_max_ones(int mat[3][3],int r,int c){
    int row=-1;
   int i=0;
   int j=c-1;
   while(i<r&&j>=0){
    if(mat[i][j]==1){
        row=i;
        j--;
    }
    else{
        i++;
    }
   }
   cout<<row;
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
    int mat[3][3]={{0,0,0},{0,0,0},{0,0,1}};
    print(mat,3,3);
    row_with_max_ones(mat,3,3);
}