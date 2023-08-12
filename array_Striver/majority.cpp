#include<iostream>
#include<map>

using namespace std;
int main(){
    int arr[]={2,2,3,3,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    //tc->O(N2)
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>n/2){
            cout<<arr[i]<<endl;
            break;
        }
    }
    //tc->O(nlogn)
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2){
            cout<<it.first<<endl;
        }
    }
    int a[]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n1=sizeof(a)/sizeof(a[0]);
    int el;
    int cnt=0;
    //apply moores voting algo
    //verify whether its cnt>n/2
    for(int i=0;i<n1;i++){
        if(cnt==0){
            el=a[i];
            cnt=1;
            //cnt++;
    
        }
        else if(a[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }//from here we found the element 
    //now we will check whether that element 
    //is occuring more than n/2 times or not
    int cnt1=0;
    for(int i=0;i<n1;i++){
        if(a[i]==el){
            cnt1++;
        }
    }
    if(cnt1>n1/2){
        cout<<"Element that is appearing more than n/2 times is "<< el<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}