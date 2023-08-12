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
bool checkPalindrome(Node*& head){
    if(head==NULL){
        return false;
    }
    if(head->next=NULL){
        return true;
    }
    // >1 node ke liye chalega
    Node*slow=head;
    Node*fast=head->next;
    

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