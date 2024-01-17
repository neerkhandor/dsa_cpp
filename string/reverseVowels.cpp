#include<iostream>
#include<string>
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return ch=='a'|| ch=='e'||ch=='i'||ch=='o'|| ch=='u';
}
string reverseVowels(string &str){
    int l=0;
    int n=str.size();
    int h=n-1;
    while(l<h){
        if(isVowel(str[l]) && isVowel(str[h])){
            swap(str[l],str[h]);
            l++;
            h--;
        }
        else if(isVowel(str[l])==0){
            l++;
        }
        else{
            h--;
        }
    }
    return str;
}
int main(){
    string str="leetcode";
    string ans=reverseVowels(str);
    cout<<ans<<endl;


}