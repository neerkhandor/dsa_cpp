#include<iostream>
using namespace std;
if((arr[mid]-arr[mid-1])==1){
    s=mid+1;
}
int main(){

    int arr[]={1,2,3,4,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     if((arr[i+1]-arr[i])!=1){
    //         cout<<arr[i]+1;
    //         break;
    //     }
    // }
    int totalSum=(n+1)*(n+2)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<totalSum-sum<<endl;
}