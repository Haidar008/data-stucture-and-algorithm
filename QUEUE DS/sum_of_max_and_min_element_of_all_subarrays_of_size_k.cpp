#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n,int k){
    deque<int>small;
    deque<int>large;
    int total=0;
    for(int i=0;i<k;i++){
        while(!small.empty()&&arr[small.back()]>=arr[i]){
            small.pop_back();
        }

        while(!large.empty()&&arr[large.back()]<=arr[i]){
            large.pop_back();
        }
        small.push_back(i);
        large.push_back(i);
    }

    for(int i=k;i<n;i++){
        total+=arr[small.front()]+arr[large.front()];
        while(!small.empty()&&small.front()<=i-k){
            small.pop_front();
        }
        while(!large.empty()&&large.front()<=i-k){
            large.pop_front();
        }

        while(!small.empty()&&arr[small.back()]>=arr[i]){
            small.pop_back();
        }
        while(!large.empty()&&arr[large.back()]<=arr[i]){
            large.pop_back();
        }
        small.push_back(i);
        large.push_back(i);
    }
    total+=arr[small.front()]+arr[large.front()];
    return total;

}
int main(){
    int arr[7]={2,5,-1,7,-3,-1,-2};
    int n=7;
    int k=4;
    int ans=sum(arr,n,k);
    cout<<ans<<endl;
    return 0;
}