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
void print(Node * &head){
Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode =new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
//ll ke head pe hame data rakhna hai
else{ 
   Node *newNode=new Node(data);
   newNode->next=head;
   head=newNode;
 }
}
void insertAtTail(Node* & head,Node* & tail,int data){
    if(head==NULL){
        Node* newNode =new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //create a node
    //tail->next=newNode
    //tail=newNode
    else{
        Node * newNode=new Node(data);
        tail->next=newNode;
        tail=newNode;
    }
}
int getLength(Node* &head)
{
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
return len;
}
void insertAtPosition(Node* &head,Node* &tail,int position,int data){
    //if ll is empty
   
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==0){
        cout<<"pos : 0 called"<<endl;
        insertAtHead(head,tail,data);
        return;
    }
    int len=getLength(head);
    cout<<len<<endl;
    if(position>=len+1){
        insertAtTail(head,tail,data);
        return;
    }
    if (position > len) {
    cout << "Invalid position" << endl;
    return;
   }
   else{
     int i=1;
    Node *prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    Node* newNode=new Node(data);
    newNode->next=curr;
    prev->next=newNode;
   }
   
}

void deletion(Node* &head,Node* &tail,int position){
        if(head==NULL){
                cout<<"linked list is empty"<<endl;
                return;
        }
        int len=getLength(head);
        if(position==0 || position >len){
            cout<<"Invalid Position"<<endl;
            return;
        }
       // for head node
        if(position==1){
                Node* temp=head;
                head=head->next;
                temp->next=NULL;
                delete temp;
                return;
        }
        //for last node
        
        if(position==len){
            Node*prev=head;
            int i=1;
            while(i<position-1){
                prev=prev->next;
                i++;
            }
            
            prev->next=NULL;
            Node *temp=tail;
            tail=prev;
            delete temp;
            return;
        }
        //for other nodes in between
        if(position>1 && position<len){
         Node*prev=head;
            int i=1;
            while(i<position-1){
                prev=prev->next;
                i++;
            }
        Node* curr=prev->next;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
// Node * head=new Node(10);
// Node* Tail=NULL;
// Node *second=new Node(20);
// head->next=second;
// Node *third=new Node(30);
// second->next=third;
// Node *fourth=new Node(40);
// third->next=fourth;
// Node *fifth=new Node(50);
// fourth->next=fifth;
// Node *sixth=new Node(60);
// fifth->next=sixth;
Node* head=NULL;
Node* tail=NULL;
insertAtHead(head,tail,100);
insertAtHead(head,tail,200);
insertAtTail(head,tail,500);
// print(head);
// cout<<endl;
insertAtPosition(head,tail,0,101);
insertAtPosition(head,tail,1,102);
insertAtPosition(head,tail,6,5);
//this is working sice pos>=len
print(head);
cout<<endl;
int ans=getLength(head);
cout<<"length of linked list before deleteion is " <<ans<<endl;
deletion(head,tail,6);

print(head);
cout<<endl;
cout<<"head : "<<head->data<<endl;
cout<<"tail : "<<tail->data<<endl;
int ans1=getLength(head);
cout<<endl;
cout<<"length of linked list after deletion is " <<ans1<<endl;
}