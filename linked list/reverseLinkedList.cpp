#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node*next;
Node(){
    this->data=0;
    this->next=NULL;
}
Node(int data){
    this->data=data;
    this->next=NULL;
}
};
void recRev(Node* &head,Node*prev,Node* curr){
    if(curr==NULL){
        head=prev;
        return;
    }
    

}
Node* reverseLL(Node* &head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
void print(Node* &head){
    if(head==NULL){
        return ;
    }
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLen(Node *&head){
    if(head==nullptr){
        return 0;
    }
    int cnt=0;
    Node*temp=head;
    while(temp!=NULL){
        cnt++;
    }
    return cnt;
}

int main(){
Node*first=new Node(10);
Node*second=new Node(20);
Node*third=new Node(30);
Node*fourth=new Node(40);
Node*fifth=new Node(50);
Node*head=first;
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=NULL;
print(head);
cout<<endl;
cout<<"printing reverse"<<endl;
Node*ans=reverseLL(head);
print(ans);

}