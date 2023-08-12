#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
vector<int> twoSum(vector<int>arr,int target){
    map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        int el=arr[i];
        int rem=target-el;
        if(mpp.find(rem)!=mpp.end()){
            return {i,mpp[rem]};
        }
        mpp[el]=i;
    }
    return {-1,-1};
}
int main(){
    int arr[]={2,6,5,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=14;
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            cout<<i<<" "<<j<<endl;
            break;
        }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<endl;

    vector<int> a={2,6,5,8,11};
    vector<int>ans=twoSum(a,target);
    for(auto i:ans){
        cout<<i<<" ";
    }

}