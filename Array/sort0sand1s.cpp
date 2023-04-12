#include  <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort0sAnd1s(int arr[],int n){
//initialization
    int l=0;
    int h=n-1;
    //condition
    while(l <= h){
        if(arr[l]==0){
            //increment
            l++;
        }
        else if(arr[h]==1){
            h--;
        }
        else{ 
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }

}

int main(){
  int arr1[]={0,1,0,0,0,1,1,0,1,0,1,0};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    sort0sAnd1s(arr1,n1);
    cout<<"helloworld"<<endl;
    print(arr1,n1);
}