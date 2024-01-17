#include<iostream>
using namespace std;
//Last in first out
//sab se upar wala pehle remove hoga
//so if we insert 1 2 3 4 then while removing 
//it will come as 4 3 2 1
//so whenever there is anything like reversing we can think of stack
//there are various operations of stack
//push ->pushes an element into the stack -- s.push(element)
//pop ->removes the top most element from the stack -- s.pop()
//empty ->returns true or false if stack is empty then true else false -- s.empty()
//size ->returns the size of the stack -- s.size()
//top ->returns the topmost element of the stack -- s.top()
//we can create stack using array or linked list
//mujhe ek aisa index chahiye jaha pe push kar pau so uske liye i will have one top
//so this top will maintain whether there is space available in the stack or not

class Stack{
public:
    int top;
    int *arr;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int data){

        //O(1)
        if((size-top) >1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack Overflow"<<endl;//khali jagah nahi mili
        }
    }
    void pop(){
         //O(1)
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int peek(){
         //O(1)
        if(top>=0 && top<size){
            return arr[top];
        }
        // else if{
        //     cout<<"Stack is Empty";
        // }
        return -1;
    }
    bool isEmpty(){
         //O(1)
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int getSize() {
        return top + 1;
    }
};


int main(){
Stack st(5);
st.push(32);
st.push(35);
st.push(38);
// st.push(35);
// st.push(38);
// st.push(35);
// st.push(38);
int ans=st.peek();
cout<<ans<<endl;
int s=st.getSize();
cout<<"current size of stack is "<<s<<endl;
st.pop();
st.pop();
st.pop();
cout<<st.peek()<<endl;
bool a=st.isEmpty();
if(a){
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"Stack is not empty"<<endl;
}
st.pop();


}