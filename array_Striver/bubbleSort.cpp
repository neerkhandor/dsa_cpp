#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,-1,-2,-5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    //after 1st pass largest element will be at its correct position
    //after ith round ith largest element ko sahi jagah pe pohcha dete hai
    //TC-best case->O(N)
    //TC-worst case->O(N^2)
    //SC-O(1)
    //Yes, Bubble Sort is a stable sorting algorithm. We swap elements only when A is less than B. 
    //If A is equal to B, we do not swap them, 
    //hence relative order between equal elements will be maintained.
    bool flag=false;
    for(int i=0;i<n;i++){
        // this inner loop is the 1st pass where just the first highest no will reach the correct position
        
        for(int j=0;j<n-i-1;j++){
            //we have to check that j+1 doesn't go outside index therfore -1
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}