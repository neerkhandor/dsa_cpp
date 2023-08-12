#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node *next;
Node(){
    this->data=0;
    this->next=NULL;
}
Node(int data){
    this->data=data;
    this->next=NULL;
}
~Node(){
    cout<<"data that is deleted is "<<this->data<<endl;
}
};
void print(Node* &head){
cout<<head->data<<" ";
  Node* temp=head->next;
  while(temp!=head && temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next; 
  }
}
int getLength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtHead(Node* &head,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
    }
    else{
        Node*newNode=new Node(data);
    newNode->next=head;
    int len=getLength(head);
    Node*prev=head;
    int i=1;
    while(i<len){
        prev=prev->next;
    }
    prev->next=newNode;
    head=newNode;
    }
    
}
int main(){
// Node*head=new Node(10);
// Node*first=new Node(20);
// Node*second=new Node(30);
// Node*third=new Node(40);
// head->next=first;
// first->next=second;
// second->next=third;
// third->next=head;

Node* head=NULL;
insertAtHead(head,10);
print(head);
insertAtHead(head,20);
print(head);
// insertAtHead(head,30);
// print(head);
cout<<"Sahi chal raha hai"<<endl;
}