#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="n\0ee\0r";
    char ch[100]="n\0ee\0r";
    cout<<str<<endl;
    cout<<ch<<endl;
}