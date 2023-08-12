#include<iostream>
using namespace std;

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
            cout<<"Stack Overflow"<<endl;
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
        if(top>=0 ){
            return arr[top];
        }
        // else{
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
st.pop();
st.pop();
st.pop();
cout<<st.peek()<<endl;
bool a=st.isEmpty();
cout<<a<<endl;
st.pop();


}