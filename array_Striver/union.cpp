#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
vector < int > findUnion(vector < int > arr, vector < int > arr1) {
    // Write your code here
    vector<int> unionArr;
    int a=0;
    int b=0;
    int n=arr.size();
    int n1=arr1.size();
    while(a<n && b<n1){
        if(arr[a]<=arr1[b]){
            if(unionArr.size() ==0 || unionArr.back()!=arr[a]){
                unionArr.push_back(arr[a]);
            }
            a++;
        }
        else{
            if(unionArr.size() ==0 || unionArr.back()!=arr1[b]){
                unionArr.push_back(arr1[b]);
            }
            b++;
        }
    }
    while(a<n){
            if(unionArr.size() ==0 || unionArr.back()!=arr[a]){
                unionArr.push_back(arr[a]);
            }
            a++;
    }
    while(b<n1){
    if(unionArr.size() ==0 || unionArr.back()!=arr1[b]){
                unionArr.push_back(arr1[b]);
            }
            b++;
    }
    return unionArr;
}
int main(){
    vector<int> arr={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=arr.size();
    vector<int> arr1{2, 3, 4, 4, 5, 11, 12};
    int n1=arr1.size();
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    int k=st.size();
    int union1[k];
    int j=0;
    for(auto x:st){
        union1[j]=x;
        j++;
    }
    for(int i=0;i<k;i++){
        cout<<union1[i]<<" ";
    }
    cout<<endl<<endl;
    // int a=0;
    // int b=0;
    // vector<int> unionArr;
    // while(a<n && b<n1){
    //     if(arr[a]<=arr1[b]){
    //         if(unionArr.size() == 0 || unionArr.back()!=arr[a]){
    //             unionArr.push_back(arr[a]);
    //         }
    //         a++;
    //     }
    //     else{
    //         if(unionArr.size() == 0 || unionArr.back()!=arr1[b]){
    //             unionArr.push_back(arr1[b]);
    //         }
    //         b++;
    //     }
    // }
    // while(a<n){
    //         if(unionArr.size() == 0 || unionArr.back()!=arr[a]){
    //             unionArr.push_back(arr[a]);
    //         }
    //         a++;
    // }
    // while(b<n1){
    // if(unionArr.size() == 0 || unionArr.back()!=arr1[b]){
    //             unionArr.push_back(arr1[b]);
    //         }
    //         b++;
    // }
    // for(auto it:unionArr){
    //     cout<<it<<" ";
    // }
    vector<int>ans=findUnion(arr,arr1);
    for(auto i:ans){
        cout<<i<< " ";
    }
    cout<<endl<<endl;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]++];
    }
    for(int i=0;i<n1;i++){
        mpp[arr1[i]++];
    }
    for(auto itr:mpp){
        cout<<itr.first<<" ";
    }
}
