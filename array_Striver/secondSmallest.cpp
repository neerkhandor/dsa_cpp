#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={3,4,5,3,4,2,5,1,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int small=arr[0];
    int secsmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            secsmall=small;
            small=arr[i];
        }
        // else if(arr[i]!=small && arr[i]<secsmall){
        //     secsmall=arr[i];
        // }
    }
    cout<<"Second small element is "<<secsmall<<endl;
}

/* 
vector<int> minAnd2ndMin(int a[], int n) {
    int min1 = a[0], min2 = INT_MAX;
    
    for (int i = 1; i < n; i++) {
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] < min2 && a[i] != min1)
            min2 = a[i];
    }

    if (n == 1 || min2 == INT_MAX)
        return {-1, -1};
    else
        return {min1, min2};
}
*/