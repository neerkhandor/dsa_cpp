#include<iostream>
using namespace std;
//hamne ek node create karli
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
};
void print(Node * &head){
Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
void insertAtHead(Node* &head,int data){
//ll ke head pe hame data rakhna hai
Node *newNode=new Node(data);
newNode->next=head;
head=newNode;
}
void insertAtTail(Node* & tail,int data){
    //create a node
    //tail->next=newNode
    //tail=newNode
    Node * newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;
}

int main(){
Node * head=new Node(10);
Node* Tail=NULL;
Node *second=new Node(20);
head->next=second;
Node *third=new Node(30);
second->next=third;
Node *fourth=new Node(40);
third->next=fourth;
Node *fifth=new Node(50);
fourth->next=fifth;
Node *sixth=new Node(60);
fifth->next=sixth;
insertAtHead(head,100);
print(head);

}