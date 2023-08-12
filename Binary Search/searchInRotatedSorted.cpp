#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target,int start,int end){
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    mid=start+(end-start)/2;
    }
    return -1;
}
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if((mid-1)>=0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        else if((mid+1)<n && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid]>arr[s]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int main(){
    // int arr[]={4,5,6,7,1,2,3};
    int arr[]={1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pivotIndex=pivot(arr,n);
    int target=1;
    cout<<pivotIndex<<endl;
    if(target>=arr[0] && target<=pivotIndex){
        int ans=binarySearch(arr,n,target,0,pivotIndex);
        cout<<"target is present at"<<ans<<endl;
    }
    if(pivotIndex+1 < n && target >= arr[pivotIndex+1] && target <= arr[n-1]){
            int ans = binarySearch(arr, n,target, pivotIndex+1, n-1);
            cout<<"target is present at"<<ans<<endl;
        }
    // else {
    //     int ans=binarySearch(arr,n,target,pivotIndex+1,n-1);
    //     cout<<ans<<endl;
    // }








}