#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
        int front;
        int rear;
        int* arr;
        int data;
        int size;
    Queue(int size){
    this->size=size;
    front=rear=0;
    arr=new int[size];
    }

void enque(int data){
    if(rear==size){
        cout<<"Queue is Full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
}
void deque(){
    if(front==rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        arr[front]=-1;
        front++;
        if(front==rear) {
            front=0;
            rear=0;
        }   
    }
}
int getFront(){    
    if(front==rear){
        return -1;
    }
    else{
        return arr[front];
    }
}
bool isEmpty(){
    if(front==rear){
        return true;
    }
    else{
        return false;
    }
}

};
int main(){
Queue q(5);
q.enque(45);
cout<<q.getFront()<<endl;
}