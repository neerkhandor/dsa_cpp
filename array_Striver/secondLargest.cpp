#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int arr[100]={7,4,2,8,9,6,7,9,9,9,9,8,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    //method -1 sorting
    sort(arr,arr+n);
    int largest=arr[n-1];
    int secondLargest=arr[0];//if all elements are same
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            secondLargest=arr[i];
            break;
        }
    }
    cout<<"Largest Element is "<<largest<<" and Second Largest is "<<secondLargest<<endl;
    //method -2
    int lar=arr[0];
    int secondLar=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secondLar && arr[i]!=lar){
            secondLar=arr[i];
        }
    }
    cout<<"Second Largest "<<secondLar<<endl;

    //optimal
    int a=arr[0];//largest
    int b=-1;//secondLargest
//O(N)
    for(int i=0;i<n;i++){
        if(arr[i]>a){
            b=a;
            a=arr[i];
        }
        else if(arr[i]<a && arr[i]>b){
            b=arr[i];
        }
    }
    cout<<b<<endl;
    int arr1[]={1,3,4};
    int c=arr1[0];
    int d=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr1[i]<c){
            d=c;
            c=arr1[i]; 
        }
        else if(arr1[i]!=c && arr1[i]<d){
            d=arr1[i];
        }
    }
    cout<<d<<endl;
}
//coding ninja

/*
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int smallest=INT_MAX;
    int secondSmall=INT_MAX;
    int largest=INT_MIN;
    int secondLarge=INT_MIN;
    vector<int> ans;
    sort(a.begin(),a.end());
    int l=a[a.size()-1];
    int sl=-1;
    int s=a[0];
    int ss=-1;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]!=l){
            sl=a[i];
            ans.push_back(sl);
            break;
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]!=s){
            ss=a[i];
            ans.push_back(ss);
            break;
        }
    }

    // for(int i=0;i<a.size();i++){
    //     if(a[i]<smallest){
    //         smallest=a[i];
    //     }
    // }
    // for(int i=0;i<a.size();i++){
    //     if(a[i]<secondSmall && a[i]!=smallest){
    //         secondSmall=a[i];
    //     }
    // }
    // for(int i=0;i<a.size();i++){
    //     if(a[i]>largest){
    //         largest=a[i];
    //     }
    // }
    // for(int i=0;i<a.size();i++){
    //     if(a[i]>secondLarge && a[i]!=largest){
    //         secondLarge=a[i];
    //     }
    // }

    //BETTER APPROACH
    //BUT TWO TRAVERSALS-> O(2N)
    // for(int i=0;i<a.size();i++){
    //     if(a[i]<smallest){
    //         smallest=a[i];
    //     }
    //     if(a[i]>largest){
    //         largest=a[i];
    //     }
    // }
    // for(int i=0;i<a.size();i++){
    //     if(a[i]<secondSmall && a[i]!=smallest){
    //         secondSmall=a[i];
    //     }
    //     if(a[i]>secondLarge && a[i]!=largest){
    //         secondLarge=a[i];
    //     }
    // }

    //optimal
    //just one pass ->O(N)
    // for(int i=0;i<a.size();i++){
    //     if(a[i]<smallest){
    //         secondSmall=smallest;
    //         smallest=a[i];
    //     }
    //     else if(a[i]<secondSmall && a[i]!=smallest){
    //         secondSmall=a[i];
    //     }
    //     if(a[i]>largest){
    //         secondLarge=largest;
    //         largest=a[i];
    //     }
    //     else if(a[i]>secondLarge && a[i]!=largest){
    //         secondLarge=a[i];
    //     }

    // }

   // return {secondLarge,secondSmall};
   return ans;
}

*/