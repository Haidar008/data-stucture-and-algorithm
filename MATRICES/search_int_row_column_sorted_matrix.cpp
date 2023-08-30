#include<iostream>
using namespace std;
int search(int mat[3][3],int r,int c,int key){
    int i=0;
    int j=c-1;
    int smallest=mat[0][0];
    int largest=mat[r-1][c-1];
    if(key<smallest||key>largest) return false;
    while(i<r&&j>=0){
        if(mat[i][j]==key){
            return 1;
            }
        else if(mat[i][j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
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
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    int ans=search(mat,3,3,key);
    if(ans) cout<<"element found"<<endl;
    else cout<<"not found"<<endl;
    return true;
}