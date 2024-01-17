#include<iostream>
#include<string>
using namespace std;
void solveR2L(string str,int i,char target,int& ans){
    //base case
    if(i>=str.length()){
        return;
    }
    if(str[i]==target){
        ans=i;
    }
    solveR2L(str,i+1,target,ans);
}
void solveL2R(string str,int i,char target,int& ans){
    //base case
    if(i<0){
        return;
    }
    if(str[i]==target){
        ans=i;
        return;
    }
    solveL2R(str,i-1,target,ans);
}
void solveUsingLoopL2R(string str,int n,char target,int &ans){
    for(int i=0;i<n;i++){
        if(str[i]==target){
            ans=i;
        }
    }
}
void solveUsingLoopR2L(string str,int n,char target,int &ans){
    for(int i=n-1;i>=0;i--){
        if(str[i]==target){
            ans=i;
            break;
        }
    }
}
int main(){
    string str="abbbscscsbsfsib";
    int n=str.length();
    int i=n-1;
    char target='a';
    int ans=-1;
    solveUsingLoopR2L(str,n,target,ans);
    cout<<ans<<endl;
    // cout<<n<<endl;
}