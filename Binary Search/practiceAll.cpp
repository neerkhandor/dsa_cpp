#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
// in case we dont find the key then we will return -1
    return -1;
}
int lowerBound(int arr[],int n,int key){
    // there is nothing just we have to find element greater than or equal to key
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=n;
    while(s<=e){
        if(arr[mid]>=key){
            ans=mid;
            e=mid-1;
        }

        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int upperBound(int arr[],int n,int key){
    // there is nothing just we have to find element greater than key
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=n;
    while(s<=e){
        if(arr[mid]>key){
            ans=mid;
            e=mid-1;
        }

        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int floor(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=n;
    // 1,2,3,4,6,7
    while(s<=e){
        if(arr[mid]>=x){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]={1,4,6,9,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key=9;
    int ans=binarySearch(arr,n,key);
    cout<<ans<<endl;
    int lb=lowerBound(arr,n,key);
    cout<<lb<<endl;
    int ub=upperBound(arr,n,key);
    cout<<ub<<endl;

}