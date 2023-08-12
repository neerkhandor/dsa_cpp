#include<iostream>
using namespace std;

int main(){

    const int x=10;
    cout<<x<<endl;
    // x=12;
    // cout<<x<<endl;
    const int *a=new int(2);//CONST DATA,NON CONST POINTER 
    //int const *a =new int(3);//same as line 10 
    // *a=23;//cant change the content of the pointer
    cout<<*a<<endl;
    int b=35;
    a=&b;//pointer itself can be reinitialized
    cout<<*a<<endl;

    int *const z=new int(4);//CONST POINTER,NON CONST DATA 
    cout<<*z<<endl;
    //CONST POINTER,CONST DATA 
    const int *const y=new int(4);

}