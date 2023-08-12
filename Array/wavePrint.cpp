#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> wavePrint(vector<vector<int>> arr,int nRows,int nCols){
    vector<int> ans;
    for(int cols=0;cols<nCols;cols++){
        if(col&1){
            for(int row=nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
            }
        }
        cout<<endl;
    }
    return ans;
}
int main(){
    vector<vector<int>> arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans=wavePrint(arr,3,3);
    for(auto i:ans){
        cout<<i<<" ";
    }
    
    
}