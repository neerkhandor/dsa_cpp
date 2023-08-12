#include <queue>
#include <vector>
#include <iostream>
using namespace std;
void solve(vector <int> &arr,int n,int k,vector <int>& ans){
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
            //cout<<0<<" ";
			q.push(0);
        }
        else{
            //cout<<arr[q.front()]<<" ";
			q.push(arr[q.front()]);
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
            // cout<<0<<" ";
			q.push(0);
        }
        else{
            //cout<<arr[q.front()]<<" ";
			q.push(arr[q.front()]);
        }
		// vector<int> ans;
		// for(auto i:q){
		// 	ans.push_back(i);
		// }
		// int len=q.size();
		// for(int i=0;i<len;i++){
		// 	ans.push_back(q[i]);
		// }
		while(!q.empty())
			{
				int element=q.front();
				q.pop();
				ans.push_back(element);
			}
}
vector<int> firstNegative(vector<int> arr, int n, int k,vector <int> &ans) {
	// Write your code here.
	solve(arr,n,k,ans);
	return ans;
}

int main(){
    vector<int> arr={4,-7,4,6,7,-11,2,4};
    int n=arr.size();
    int k=2;
    vector<int>ans;
    ans=firstNegative(arr,n,k,ans);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" "; 
  }
}