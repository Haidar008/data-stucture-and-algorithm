

// A celebrity is a person who is known to everyone but does not know anyone.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_celebrity(int arr[3][3],int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(i);
    }
    while(st.size()>1){
        int A=st.top();
        st.pop();
        int B=st.top();
        st.pop();
        if(arr[A][B]==1){
            st.push(B);
        }
        else{
            st.push(A);
        }
    }
    int cel=st.top();
    st.pop();
    for(int i=0;i<n;i++){
        if(i!=cel&&(arr[cel][i]==1||arr[i][cel]==0)){
            return -1;
        }
    }
    return cel;
}
int main(){
    int arr[3][3]={{0,0,0},{1,0,0},{1,1,0}};
    int n=3;
    cout<<find_celebrity(arr,n);
    return 0;
}