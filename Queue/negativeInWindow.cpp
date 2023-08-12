#include<iostream>
// #include<deque>
#include<queue>
using namespace std;
void solve(int arr[],int n,int k){
    //assuming that k<n
    // deque<int> q;
    queue<int>q;
    //processing 1st window
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            // q.push_back(i);
            q.push(i);
            }
    }
    for(int i=k;i<n;i++){
        if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        while(!q.empty() && (i-q.front()>=k)){
            // q.pop_front();
            q.pop();
        }
        //new element insertion
        if(arr[i]<0){
            //q.push_back(i);
            q.push(i);
            }
        
    }
    //for last window
     if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }

}
int main(){
   // int arr[]={12,-1,-7,8,-15,30,16,28};
   int arr[]={-1};
    int n=1;
    int k=1;
    solve(arr,n,k);

}