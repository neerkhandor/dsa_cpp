#include<iostream>
using namespace std;
int getLongestSubarrayn3(int arr[],int n,int d){
    int maxlen=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==d){
                maxlen=max(maxlen,j-i+1);
            }
        }
    }
    return maxlen;
}
int getLongestSubarrayn2(int arr[],int n,int d){
    int maxlen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
           sum+=arr[j];
           if(sum==d){
            maxlen=max(maxlen,j-i+1);
        }
        }
        
    }
    return maxlen;
}
int main(){
    int arr[]={2,3,1,1,2,3,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=10;
    int len = getLongestSubarrayn2(arr,n,k);
    cout << "The length of the longest subarray is: " << len << "\n";
}