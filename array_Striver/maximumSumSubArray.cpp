#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
            //cout<<maxi<<endl;
        }
    }
    cout<<"Maximum sum is "<<maxi<<endl;
    //kadanes algo 
    //tc->O(N)
    int maxm=INT_MIN;
    int sum=0;
    int start=0;
    int ansStart=-1;
    int ansEnd=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum==0){
            start=i;
        }
        if(sum>maxm){
            maxm=sum;
            ansStart=start;
            ansEnd=i;
        }

    }
    cout<<ansStart<<ansEnd<<endl;
    for(int i=ansStart+1;i<=ansEnd;i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Maxm sum is "<<maxm<<endl;
}