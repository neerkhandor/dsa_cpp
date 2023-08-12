#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {3,4,2,0,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Largest element in the array is "<<arr[n-1]<<endl;

    //optimal solution
    //O(N)
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;
}