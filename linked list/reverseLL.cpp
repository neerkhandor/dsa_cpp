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
void recReverse(Node*&head,Node*curr,Node*prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    Node*forward=curr->next;
    curr->next=prev;
    recReverse(head,forward,curr);
}
Node* reverse(Node* &head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=NULL;
    while(curr!=NULL){
        // cout<<curr->data<<endl;
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        // cout<<curr->data<<endl;

    }
    return prev;
}
void print(Node * &head){
Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
int main(){
Node * head=new Node(10);
// Node* Tail=NULL;
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
sixth->next=NULL;
print(head);
cout<<endl;
cout<<endl;
Node*ans=reverse(head);
print(ans);
cout<<head->data;
cout<<endl;
// Node*curr=head;
// Node*prev=NULL;
// recReverse(head,curr,prev);
// print(head);
}