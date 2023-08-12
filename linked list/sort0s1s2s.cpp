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
    ~Node(){
            cout<<"the node that is deleted is "<<this->data<<endl;
        }
};
void sort0s1s2s(Node* &head){
    int zeroCount=0,oneCount=0,twoCount=0;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else{
            twoCount++;
        }
        temp=temp->next;
    }
    temp=head;
 while(temp!=NULL){
    if(zeroCount!=0){
        temp->data=0;
        zeroCount--;
    }
    else if(oneCount!=0){
        temp->data=1;
        oneCount--;
    }
    else{
        temp->data=2;
        twoCount--;
    }
    temp=temp->next;
 }
 
}
void print(Node* & head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
Node * head=new Node(1);
Node* Tail=NULL;
Node *second=new Node(2);
head->next=second;
Node *third=new Node(0);
second->next=third;
Node *fourth=new Node(0);
third->next=fourth;
Node *fifth=new Node(0);
fourth->next=fifth;
Node *sixth=new Node(0);
fifth->next=sixth;
sixth->next=NULL;
print(head);
cout<<endl;
sort0s1s2s(head);
print(head);
}