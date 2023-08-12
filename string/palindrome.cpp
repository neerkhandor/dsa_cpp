#include<iostream>
#include<cstring>
using namespace std;
int getLength(char ch[]){
    int i=0;
    int cnt=0;
    while(ch[i]!='\0'){
        i++;
        cnt++;
    }
    return cnt;
}
bool isPalindrome(char ch[]){
    int n=strlen(ch);
    int i=0;
    int j=n-1;
    while(i<j){
        if(ch[i]!=ch[j]){
           return false;
        }
        else{
            i++;j--;
        }
    }
    return true;
}
void convertToUpper(char ch[]){
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>='a'&& ch[i]<='z'){
            ch[i]=ch[i]-'a'+'A';
        }
    }
}
void convertToLower(char ch[]){
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>='A'&& ch[i]<='Z'){
            ch[i]=ch[i]+'a'-'A';
        }
    }
}
int main(){
    //char ch[100]="racecar";
    char ch[100];
    cout<<"enter a string : ";
    cin.getline(ch,20);
    int len=getLength(ch);
    cout<<"length of string is "<<len<<endl;
    if(isPalindrome(ch)){
        cout<<ch<<" is a palindrome"<<endl;
    }
    else{
        cout<<ch<<" is not a palindrome"<<endl;
    }
    convertToUpper(ch);
    cout<<ch<<endl;
    convertToLower(ch);
    cout<<ch<<endl;
}