#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//good Solution but not in place we are first storing and then overwriting 
//TC:O(N)
//SC:O(1)
// void sort0s1s2s(int arr[],int n){
//     int count0=0;
//     int count1=0;
//     int count2=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         else if(arr[i]==1){
//             count1++;
//         }
//         else{
//             count2++;
//         }
//     }
//     // cout<<count0<<" "<<count1<<" "<<count2<<endl;
//     for(int i=0;i<count0;i++){
//         arr[i]=0;
//     }
//     int n1=count0+count1;
//     // cout<<n1<<endl;//2+2=4
//     for(int i=count0;i<n1;i++){
//         arr[i]=1;
//     }
//     int n2=count0+count1+count2;
//     // cout<<n2<<endl;
//     for(int i=n1;i<n;i++){
//         arr[i]=2;
//     }
// }


void sort012(int arr[],int n){
    int l=0;
    int m=0;//track rakhe che pura array nu etle for comparison 
    //purpose we are using itane we have to compare from index 0
    //therefore we ahave initialized it to 0
    int h=n-1;

    // 0 0 0 1 1 1 2 2 2

    // l     m     h
    // l and h will never meet since there is mid in between 
    // therefore  we do m<=h
    // mid<h willnot work   0 1 1 2 0 0
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
}
int main(){
    int arr[]={0,1,1,2,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    print(arr,n);
}