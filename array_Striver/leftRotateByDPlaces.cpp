#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=14;
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];//temp-> 1 2 3 4
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];//arr-> 5 6 7 8
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];//arr->5 6 7 8 1 2 3 4
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}