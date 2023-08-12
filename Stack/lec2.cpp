#include<iostream>
#include<stack>
using namespace std;
class TwoStack{
    public:
    int top1;
    int top2;
    int *arr;
    int size;
    TwoStack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }

};
void push1(int data){
if(top2-top1>1){
    top1++;
    arr[top1]=data;
}
else{
    cout<<"Stack Overflow";
}
}
void push2(int data){
    if(top2-top1>1){
    top2--;
    arr[top2]=data;
}
else{
    cout<<"Stack Overflow";
}
}
int pop1(){
    if(top1>=0){
        int ans=arr[top1];
        top1--;
        return ans;
    }
    else{
        return -1;
    }
}
void pop2(){
if(top2<size){
        int ans=arr[top2];
        top2++;
        return ans;
    }
    else{
        return -1;
    }
}

int main(){
    TwoStack ts(10);
    ts.push1(12);
    ts.push1(2);
    
    
}