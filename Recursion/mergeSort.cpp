#include<iostream>
using namespace std;
void merge(int *arr,int n,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *leftArray=new int[len1];
    int *rightArray=new int[len2];
    int k=s;
    //copying elements of length len1 to leftArray
    for(int i=0;i<len1;i++){
        leftArray[i]=arr[k];
        k++;
    }
    k=mid+1;
    //now k is pointing to index mid+1
     //copying elements of length len2 to rightArray
    for(int i=0;i<len2;i++){
        rightArray[i]=arr[k];
        k++;
    }
    int leftIndex=0;//maintaining index for left array
    int rightIndex=0;//maintaining index for right array
    int mainArrayIndex=s;//this is final merged array so its 
    //starting index is s
    while(leftIndex<len1 && rightIndex<len2){
        if(leftArray[leftIndex]<rightArray[rightIndex]){
            arr[mainArrayIndex++]=leftArray[leftIndex++];
        }
        else{
            arr[mainArrayIndex++]=rightArray[rightIndex++];
        }
    }
    while(leftIndex<len1){
        arr[mainArrayIndex++]=leftArray[leftIndex++];
    }
    while(rightIndex<len2){
        arr[mainArrayIndex++]=rightArray[rightIndex++];
    }
}
void mergeSort(int *arr,int n,int s,int e){
    int mid=s+(e-s)/2;
    if(s>=e)
    return;
    mergeSort(arr,n,s,mid);
    mergeSort(arr,n,mid+1,e);
    merge(arr,n,s,e);
}

int main(){
    int arr[]={3,1,7,4,3,31,53};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    mergeSort(arr,n,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}