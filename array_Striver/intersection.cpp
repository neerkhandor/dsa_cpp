#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,4,5,6};
    int arr2[]={2,3,3,5,6,6,7};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    int vis[n2]={0};
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr[i]=arr2[j] && vis[j]==0){
                ans.push_back(arr[i]);
                vis[j]=1;
                break;
            }
            if(arr2[j]>arr[i]){
                break;
            }
        }
    }
    for(auto itr:ans){
        cout<<itr<<" ";
    }
}