#include<iostream>
#include<set>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,4,5,6,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    // set<int>st;
    // for(int i=0;i<n;i++){
    //     st.insert(arr[i]);
    // }
    // int k=st.size();
    // cout<<k<<endl;
    // int i=0;
    // for(auto x: st){//since it is inplace so we will make changes to the array itself
    //     arr[i]=x;
    //     i++;
    // }
    // for(int i=0;i<k;i++){
    //     cout<<arr[i]<<" ";
    // }

    //better approach O(N)
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"Count of unique elements after removing duplicates is "<<i+1<<endl;
  int k=i+1;
  for(int j=0;j<k;j++){
    cout<<arr[j]<<" ";
  }
}