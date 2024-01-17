#include<iostream>
#include<algorithm>
using namespace std;

int secondLargest(int arr[],int n){
    sort(arr.begin(),arr.end());
    // 1,3,4,6,6,9,9
    for(int i=n-1;i>0;i--){
        

    }
}
int main(){
    int arr[]={6,3,4,1,9,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=secondLargest(arr,n);
    cout<<ans<<endl;

}