#include<iostream>
using namespace std;
int partition(int *arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j; 
}
void qs(int *arr,int l,int h){
    // if(l>=h){
    //     return;
    // }
    if (l < h) {
      int partitionIndex = partition(arr, l, h);
      qs(arr, l, partitionIndex - 1);
      qs(arr, partitionIndex + 1, h);
    }
}
int main(){
    int arr[]={4,6,2,5,7,9,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int h=n-1;
    cout<<"quick sort"<<endl;
    qs(arr,l,h);
    cout<<"hello"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}