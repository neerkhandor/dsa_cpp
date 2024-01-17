#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(30);
    s.push(40);
    s.push(50);
    //s.pop();//50 will be deleted as it 
    //is at top of the stack
    cout<<"Top Element in the stack is "<<s.top();
    //it will give 50 as now it is the top element in the stack
    cout<<endl;
    cout<<"Size of the stack is "<<s.size();
    cout<<endl;
    if(s.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is Not Empty"<<endl;
    }
    // for(auto val:s){
    //     cout<<val<<" ";
    // }
    //traversing the stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }  
}