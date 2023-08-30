#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
vector<vector<int>>pascal_triangle(int row){
    vector<vector<int>>ans;
    for(int i=0;i<row;i++){
        vector<int>v(i+1,1);
        for(int j=1;j<i;j++){
            v[j]=ans[i-1][j-1]+ans[i-1][j];
        }
        ans.push_back(v);
    }
    return ans;
}
int main(){
    int r;
    cout<<"Enter the number of row "<<endl;
    cin>>r;
    vector<vector<int>>ans=pascal_triangle(r);
    print(ans);
}