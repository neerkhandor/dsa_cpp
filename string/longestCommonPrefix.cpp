#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string>str={"flower","flow","flight","right"};
    string prefix=str[0];//this stores flower
    for(int i=1;i<str.size();i++){
        string currString=str[i];
        int j=0;
        while(j<prefix.length() && j<currString.length() && prefix[j]==currString[j]){
            j++;
        }
        prefix=prefix.substr(0,j);
        if(prefix.empty()){
            // return "";
            cout<<" "<<endl;
        }
    }
    cout<<prefix<<endl;

}