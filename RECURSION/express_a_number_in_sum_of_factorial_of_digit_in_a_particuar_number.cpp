#include<ostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>fact_digit_sum(int n){
    vector<int>fact(10,1);
    
    for(int i=1;i<fact.size();i++){
        fact[i]=fact[i-1]*i;
    }
    vector<int>ans;
    for(int i=fact.size()-1;i>=0;i--){
        while(fact[i]<=n){
            ans.push_back(i);
            n=n-fact[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
void print_ans(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    vector<int>ans=fact_digit_sum(n);
    print_ans(ans);
    return 0;
}