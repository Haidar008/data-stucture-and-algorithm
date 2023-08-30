#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void common_element(int mat[3][3],int r,int c){
    unordered_map<int,int>mp;
    for(int i=0;i<c;i++){
        mp[mat[0][i]]=1;
    }
    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            if(mp[mat[i][j]]==i){
                mp[mat[i][j]]=i+1;
            }
            if(i==r-1&&mp[mat[i][j]]==r){
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
    int mat[3][3]={{1,2,3},{3,5,6},{7,8,3}};
    print(mat,3,3);
    common_element(mat,3,3);
}