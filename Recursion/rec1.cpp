#include <iostream>
#include <string.h>
using namespace std;

int main(){
char arr[10]={'a','b','c','b'};
char x;
cout<<"Enter the character to search for : ";
cin>>x;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    if(arr[i]==x){
        cout<<i<<endl;
        break;
    }
}
cout<<endl;
for(int i=n;i>=0;i--){
    if(arr[i]==x){
        cout<<i<<endl;
        break;
    }
}
 char str[] = "This is a sample string";
  char pch;
  pch=strrchr(str,'s');


}