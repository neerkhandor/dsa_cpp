#include<iostream>
#include<stack>
using namespace std;
void reverse(string &s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
}
//tc->O(N)
//sc->O(N) since we used stack
string reverseUsingStack(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    int i=0;
    while(!st.empty()){
        char ch=st.top();
        s[i]=ch;
        st.pop();
        i++;
    }
    return s;
}
int main(){
    string str="vansh";
    reverse(str);
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    cout<<endl;
    string str1="jigna";
    string ans=reverseUsingStack(str1);
    cout<<ans<<endl;

}