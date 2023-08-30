#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>set;
    int arr[6]={10,20,10,20,30,40};
    for(int i=0;i<6;i++){
        set.insert(arr[i]);
    }
    cout<<set.size()<<endl;
}