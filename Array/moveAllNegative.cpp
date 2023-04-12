#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void moveAllNegativeToLeft(int arr[],int n){

    //TC:O(N)
    //SC:O(1)

    int l=0;
    int h=n-1;
    while(l<=h){
        if(arr[l]<0){
            cout<<"inside low"<<endl;
            l++;
        }
        else if(arr[h]>=0){
            h--;
            cout<<"inside high"<<endl;
        }
        else{
            swap(arr[l],arr[h]);
            l++;
            h--;
            cout<<"Swapping"<<endl;
        }
    }
}
// void sort0sAnd1s(int arr[],int n){
//     int l=0;
//     int h=n-1;
//     while(l<h){
//         if(arr[l]==0){
//             l++;
//         }
//         else if(arr[h]==1){
//             h--;
//         }
//         else{
//             swap(arr[l],arr[h]);
//         }
//     }
// }
int main(){
    int arr[]={1,2,-3,4,-5,6,7,-2,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveAllNegativeToLeft(arr,n);
    print(arr,n);
    cout<<"hello"<<endl;
  
    

}