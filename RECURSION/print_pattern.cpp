//we need to print pattern :
//when n=16
// o/p={16,11,6,1,-4,1,6,11,16}
//when n=10
// o/p={10,5,0,5,10};
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class pattern{
    public:
    void solve(vector<int>&v,int n){
        if(n<=0){
            v.push_back(n);
            return;
        }
        v.push_back(n);
        solve(v,n-5);
        v.push_back(n);
    }
    vector<int>print_pattern(int n){
        vector<int>v;
        solve(v,n);
        return v;
    }
    void print_array(vector<int>arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    pattern pa;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<int>ans=pa.print_pattern(n);
    pa.print_array(ans);
    return 0;
}