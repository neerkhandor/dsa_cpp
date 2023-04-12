#include <iostream>
using namespace std;

class Node{
 public:
    int data;
    Node* prev;
    Node* next;
    
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    
   
};
 void print(Node* &head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}
int getLength(Node* &head){
    int len=0;
     Node *temp=head;
        while(temp!=NULL){
         len++;
        temp=temp->next;
          
            
        }
        return len;
}
void insertAtHead(Node* &head,int data,Node* &tail){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
         Node* newNode=new Node(data);
         newNode->next=head;
         head->prev=newNode;
         head=newNode;
    }
}

void insertAtTail(Node* &head,int data,Node* &tail){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
         Node* newNode=new Node(data);
           newNode->prev=tail;
        tail->next=newNode;
        //   newNode->prev=tail;
      
        tail=newNode;
    }
}
void insertAtPosition(Node * &head,Node* &tail,int pos,int data){
    if(head==NULL){
        //idhar position ki zarurat hi nai
          Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        if(pos==1){
            insertAtHead(head,data,tail);
        }
        int len=getLength(head);
        
    }
}
void deletion(Node * &head,Node* &tail,int data){
    if(head==NULL){
        cout<<"LinkedList is Empty";
        return;
    }
    else if(head->next==NULL){
        Node*temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    
}
int main(){
// Node* head=NULL;
// Node* tail=NULL;
Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);
first->next=second;
second->prev=first;
second->next=third;
third->prev=second;

Node* head=first;
Node* tail=third;
print(head);
cout<<endl;
int ans=getLength(first);
cout<<ans<<endl;
insertAtHead(head,101,tail);
print(head);
cout<<endl;
insertAtTail(head,202,tail);
print(head);

}