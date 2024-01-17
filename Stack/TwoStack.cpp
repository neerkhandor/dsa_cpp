#include<iostream>
#include<limits.h>
using namespace std;
class TwoStack
{
public:
    int size;
    int *arr;
    int top1;
    int top2;
    // since we have two stack so to access both the stack we will have two top pointers
    // in this case the first approach which will come to our mind is dividing the space
    // equally between two stack but in this case there will be lot of wastage of space
    // suppose 1st stack requires space of 8 elements and second stack jsut requires 
    // space of 2 elements then 1st stack will only be able to store 5 elements 
    // and 2nd stack will also have three spaces empty
    // so the better approach for this would be to use one top from starting index
    // and other top from the last index
    TwoStack(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int[s];
    }
    void push1(int element){
        if(top2-top1>1){
            top1++;
            arr[top1]=element;
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    void push2(int element){
        if(top2-top1>1){
            top2--;
            arr[top2]=element;
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            arr[top1]=INT_MAX;
            top1--;
            return ans;
        }
        else{
            //stack is empty
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            arr[top2]=INT_MAX;
            top2++;
            return ans;
        }
        else{return -1;}
        
    }
    void print() {
        cout << endl;
        cout << "top1: " << top1 << endl;
        cout << "top2: "<< top2 << endl;
        for(int i=0; i<size; i++) {
                cout << arr[i] << " ";
        }cout << endl;
    }

    bool isFull(){
        if(top2-top1>1){
            return false;
        }
        return true;
    }
};

int main(){
    TwoStack st(5);
    st.push1(3);
    st.push1(4);
    st.push1(5);
    st.push2(10);
    st.push2(9);
    // st.push2(8);
    st.print();
    bool ans=st.isFull();
    if(ans){
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }
    int ans1=st.pop1();
    cout<<ans1<<endl;
    st.print();
    int ans2=st.pop2();
    cout<<ans2<<endl;
    st.print();
}