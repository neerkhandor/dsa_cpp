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
                cout<<"the node that is deleted is "<<this->data<<endl;
        }
};
Node* reverse(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=nullptr;
    while(curr!=nullptr){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
}
bool checkPalindrome(Node*& head){
    if(head==NULL){
        return false;
    }
    if(head->next=NULL){
        return true;
    }
    // >1 node ke liye chalega
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
    }
    

}
int main(){
Node * head=new Node(10);
Node *second=new Node(20);
head->next=second;
Node *third=new Node(30);
second->next=third;
Node *fourth=new Node(20);
third->next=fourth;
Node *fifth=new Node(10);
fourth->next=fifth;
fifth->next=NULL;
bool isPalindrome=checkPalindrome(head);
if(isPalindrome){
    cout<<"ll is palindrome"<<endl;
}
else{
    cout<<"ll is not palindrome"<<endl;
}
}