#include<iostream>
#include<string>
using namespace std;
bool solve(string &str,int s,int e){
    if(s>=e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    return solve(str,s+1,e-1);
}
int main(){
    string str="neer";
    int n=str.length();
    bool ans=solve(str,0,n-1);
    if(ans){
        cout<<str<<" is palindrome"<<endl;
    }
    else{
        cout<<str<<" is not palindrome"<<endl;
    }
}