#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int first_occur(int mat[3][3],int i,int c){
    int low=0;
    int high=c-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mat[i][mid]==0){
            low=mid+1;
        }
        else{
            if(mid==0||mat[i][mid-1]==0){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
void row_with_max_ones(int mat[3][3],int r,int c){
    int row=-1;
    int max_count=INT_MIN;
    for(int i=0;i<r;i++){
        int first=first_occur(mat,i,c);
        int count=c-first;
        if(first!=-1&&count>max_count){
            max_count=count;
            row=i;
        }
    }
    cout<<row;
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
    int mat[3][3]={{0,1,1},{1,1,1},{0,0,1}};
    print(mat,3,3);
    row_with_max_ones(mat,3,3);
}