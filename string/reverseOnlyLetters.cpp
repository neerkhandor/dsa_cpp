#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="hell@o!Wor-ld";
    string reverse="";
    int n=str.length();
    for(int i=n-1;i>=0;i--){
        if(isalpha(str[i])){
            reverse+=str[i];
        }
    }
    //cout<<reverse<<endl;
    string result="";
    int j=0;
    for(int i=0;i<n;i++){
        if(isalpha(str[i])){
            result+=reverse[j];
            j++;
        }
        else{
            result+=str[i];
        }
    }
    cout<<result<<endl;
}