#include<iostream>
using namespace std;
//very adaptable algo after every step array start becoming sorted
//stable algo
//tc->O(n^2)
//best case->O(n)
int main(){
    //in insertion sort we shift no swap
    //if an element is smaller then we shift bigger element by one place
    //so we can get place for bigger element
    //ham 0th element ko already sorted manke chal rahe hai
    int arr[]={4,12,11,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        //ham ith index ke element ko pichle wale saare element se cmp kar rahe hai
        for( j=i-1;j>=0;j--){
            if(arr[j]>temp){
                //shift karna padega
                //next element copy kar liya
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}