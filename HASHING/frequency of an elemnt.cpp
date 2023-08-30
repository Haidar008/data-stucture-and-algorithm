#include<bits/stdc++.h>
using namespace std;
void count_frequency(vector<int>&v,int n){
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[v[i]]++;
    }
    for(auto it:map){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    vector<int>v={12,12,12,12,12,34,34,43,45,45,45,56,67,67,67,67,67,67,67,67,67,67,67,67,67,89,90,98};
    int n=v.size();
    count_frequency(v,n);
    cout<<v.size();
}