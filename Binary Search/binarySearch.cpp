#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(vector<int>& arr,int n,int target){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int a[]={1,3,5,7,8};
    int n1=sizeof(a)/sizeof(a[0]);
    int ans1=binary_search(a,a+n1,7);
    if(ans1){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is absent";
    }
    cout<<endl;
    vector<int>arr{3,5,7,8,9,10};
    int n=arr.size();
    int ans=binary_search(arr.begin(),arr.end(),5);
    if(ans){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    int ans2=binarySearch(arr,n,10);
    if(ans2){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Element not Present"<<endl;
    }

}