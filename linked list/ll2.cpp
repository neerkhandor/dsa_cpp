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
    ~Node(){
        cout<<"the data deleted is "<<this->data<<endl;
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
        cout<<"ll was empty and we added new node"<<endl;
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        cout<<"data is inserted at head node"<<endl;
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
        cout<<"data is inserted at tail node"<<endl;
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
            return;
        }
        int len=getLength(head);
        if(pos>=len+1){
            insertAtTail(head,data,tail);
            return;
        }
        else{
            cout<<"data is entered in some middle position "<<endl;
            Node*prevNode=head;
            int i=1;
            while(i<pos-1){
                prevNode=prevNode->next;
                i++;
            }
            Node*curr=prevNode->next;
            //step2: create a node
            Node* newNode  = new Node(data);

            //step3:
            newNode -> prev = prevNode;
            prevNode -> next = newNode;
            newNode ->next = curr;
            curr -> prev = newNode;
        }
        
    }
}
void deletion(Node * &head,Node* &tail,int pos){
    int len=getLength(head);
    if(head==NULL){
        cout<<"LinkedList is Empty";
        return;
    }
    if(head->next==NULL){
        //single node
        Node*temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(pos==1){
        cout<<"im inside pos 1"<<endl;
        Node*temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    
    if(pos==len){
        cout<<"i m inside pos "<<len<<endl;
        Node*temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    else{
        cout<<"im inside pos"<<pos<<endl;
        int i=1;
        Node* prevNode=head;
        while(i<pos-1){
            prevNode=prevNode->next;
            i++;
        }
        Node*currNode=prevNode->next;
        Node*currNext=currNode->next;
        prevNode->next=currNext;
        currNext->prev=prevNode;
        currNode->next=NULL;
        currNode->prev=NULL;
        delete currNode;
    }

    
}
int main(){
Node* head=NULL;
Node* tail=NULL;
// Node *first=new Node(10);
// Node *second=new Node(20);
// Node *third=new Node(30);
// first->next=second;
// second->prev=first;
// second->next=third;
// third->prev=second;

// Node* head=first;
// Node* tail=third;
// print(head);
// cout<<endl;
// int ans=getLength(first);
// cout<<ans<<endl;
insertAtHead(head,101,tail);
print(head);
cout<<endl;
insertAtTail(head,202,tail);
print(head);
cout<<endl;
insertAtPosition(head,tail,2,20);
print(head);
cout<<endl;
insertAtPosition(head,tail,1,30);
print(head);
cout<<endl;
insertAtPosition(head,tail,5,40);
print(head);
cout<<endl;

deletion(head,tail,5);
print(head);
cout<<endl;
cout<<"current ll is : ";
print(head);
cout<<endl;
deletion(head,tail,3);
print(head);
cout<<endl;
cout<<"current ll is : ";
print(head);
cout<<endl;
deletion(head,tail,1);
print(head);
cout<<endl;
// cout<<"hello"<<endl;
// deletion(head,tail,5);
// print(head);
// cout<<endl;
// cout<<"hello"<<endl;
// deletion(head,tail,4);
// print(head);
// cout<<endl;
cout<<"head : ";
cout<<head->data<<endl;
cout<<"tail : "<<tail->data<<endl;
}