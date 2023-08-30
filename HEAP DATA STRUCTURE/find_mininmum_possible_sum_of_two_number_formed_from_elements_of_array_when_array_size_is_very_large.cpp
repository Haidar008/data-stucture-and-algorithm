#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string add_two(string a,string b){
    int i=0;
    int j=0;
    int carry=0;
    string ans="";
    while(i<a.length()&&j<b.length()){
        int sum=((a[i]-'0')+(b[j]-'0')+carry);
        ans+=to_string(sum%10);
        carry=sum/10;
        i++;
        j++;
    }
    while(i<a.length()){
        int sum=((a[i]-'0')+carry);
        ans+=to_string(sum%10);
        carry=sum/10;
        i++;
    }
    while(j<b.length()){
        int sum=((b[j]-'0')+carry);
        ans+=to_string(sum%10);
        carry=sum/10;
        j++;
    }
    if(carry!=0){
        ans+=to_string(carry);
    }
    reverse(ans.begin(),ans.end());
    while(ans[0]=='0'){
        ans=ans.substr(1);
    }
    if(ans.length()) return ans;
    return "0";
}
string calculate(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    string a="",b="";
    for(int i=0;i<n;i++){
        if(i%2==0){
            a+=to_string(arr[i]);
        }
        else{
            b+=to_string(arr[i]);
        }
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string ans=add_two(a,b);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>arr;
    int ele;
    cout<<"Enter the elements into array "<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    string min_sum=calculate(arr,n);
    cout<<"The minimum sum formed is "<<min_sum<<endl;
    return 0;
}