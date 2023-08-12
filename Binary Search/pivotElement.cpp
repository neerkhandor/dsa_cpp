#include<iostream>
#include<vector>
using namespace std;
int pivotElement(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if((mid+1)<=e  && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if((mid-1)>=0 && arr[mid-1]>arr[mid]){
            return mid - 1; 
        }
        else if(arr[mid]>arr[s]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int pivot(vector<int> arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if((mid+1)<=e  && arr[mid]>arr[mid+1]){
            return mid+1;
        }
        else if((mid-1)>=0 && arr[mid-1]>arr[mid]){
            return mid; 
        }
        else if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;
}
int main(){
vector<int> arr{3};
int n=arr.size();
int ans=pivotElement(arr,n);
cout<<"Pivot element is "<<ans<<endl;
int ans1=pivot(arr,n);
cout<<"smaller pivot element is "<<ans1<<endl;
}