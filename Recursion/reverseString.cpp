#include<iostream>
#include<string>
using namespace std;
void reverseUsingReccursion(string &str,int s,int e){
    if(s>=e){
        return;
    }
    swap(str[s],str[e]);
    reverseUsingReccursion(str,s+1,e-1);
}
int main(){
    string str="vansh";
    int n=str.length();
    int s=0;
    int e=n-1;
    reverseUsingReccursion(str,s,e);
    cout<<str<<endl;

}