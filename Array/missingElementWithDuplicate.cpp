#include<iostream>
#include<vector>
using namespace std; 
void missingNumber(int nums[],int n) {
        for(int i=0;i<n;i++){
            int index=abs(nums[i]);
                if(nums[index-1]>0){
                    nums[index-1]*=-1;
                }
              }
        for(int i=0;i<n;i++){
        //   cout<<nums[i]<<" ";
          if(nums[i]>0){
            cout<<i+1<<" ";
        }
      }
}
  int main(){
   int nums[]={1,3,4,3,4,1};
    int n=sizeof(nums)/sizeof(int);
    missingNumber(nums,n);
  }