#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"size of queue is "<<q.size()<<endl;
    q.pop();
    cout<<"size of queue is "<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
    }
    cout<<"Front element is "<<q.front()<<endl;
//    q.back();
//     // cout<<q.emplace()<<endl;
//     // cout<<q.swap()<<endl;
}