#include<iostream>
using namespace std;
struct petrolpump{
    int petrol,distance;
};
int circular_tour(petrolpump p[],int n){
    int start=0;
    int deficit=0;
    int exfuel=0;
    for(int i=0;i<n;i++){
        exfuel+=(p[i].petrol-p[i].distance);
        if(exfuel<0){
            start=i+1;
            deficit+=exfuel;
            exfuel=0;
        }
    }
    if(exfuel+deficit>=0){
        return start;
    }
    return -1;
}
int main(){
    petrolpump arr[]={{7,6},{8,7},{5,8},{11,9},{7,7},{6,5}};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=circular_tour(arr,n);
    cout<<"The starting petrolpump is at index "<<ans<<endl;
    return 0;
}