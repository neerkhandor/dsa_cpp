#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int firstOccurence(vector<int>& arr,int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccurence(vector<int>& arr,int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> arr{2,3,4,4,4,4,4,8,9,10};
    int n=arr.size();
    int target=4;
    int ans1=firstOccurence(arr,n,target);
    int ans2=lastOccurence(arr,n,target);
    cout<<"first occurence of "<<target<<" is at "<<ans1<<" and last occurence of "<<target<<" is at "<<ans2<<endl;
    auto ans=lower_bound(arr.begin(),arr.end(),target);
    cout<<ans-arr.begin()<<endl;
    auto ans3=upper_bound(arr.begin(),arr.end(),target);
    cout<<ans3-arr.begin()<<endl;
    int a=(ans2-ans1) + 1;
    cout<<target<<" is appearing "<<a<<" times."<<endl;
}