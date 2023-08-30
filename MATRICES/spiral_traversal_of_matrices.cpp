#include<iostream>
using namespace std;
void spiral_traversal(int mat[3][3],int r,int c){
   int top=0;
   int right=c-1;
   int bottom=r-1;
   int left=0;
   while(top<=bottom&&left<=right){
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=0;i--){
            cout<<mat[bottom][i]<<" ";
        }
        bottom--;
        }
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            cout<<mat[i][left]<<" ";
        }
        left++;
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
    spiral_traversal(mat,3,3);
}