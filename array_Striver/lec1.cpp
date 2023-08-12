#include<iostream>
using namespace std;

int arr[10000000]={};
int main(){
    cout<<"hello";
    int arr1[100000]={};
    cout<<"hello";
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<sizeof(arr1)/sizeof(arr1[0])<<endl;
    cout<<arr[4]<<arr[7]<<endl;
    cout<<arr1[0]<<arr[6]<<endl;
}