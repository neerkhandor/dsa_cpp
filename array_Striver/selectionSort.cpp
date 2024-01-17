#include<iostream>
using namespace std;

int main(){
    int arr[]={1,7,9,2,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    //there are different rounds.passes
    //in every round we place smallest element to its correct place
    for(int i=0;i<n-1;i++){
        //for everyr i i have to find minimum
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        //after iterating to the whole array we will find the smallest
        //element and we will swap it with the first element
        swap(arr[mini],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}