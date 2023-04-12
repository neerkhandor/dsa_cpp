#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            if(nums[index]<0){
                ans.push_back(index);
                cout<<"duplicate index is "<<index<<endl;
              
            }
            else{
                nums[index]*=-1;
            }
        }
        return ans;
    }
int main(){
    vector<int> nums={2,3,1,4,3,2};
vector<int> ans=findDuplicates(nums);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
// cout<<"world"<<endl;
}