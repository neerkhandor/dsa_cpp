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
Node* getMiddle(Node*& head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
    //tc-o(n)
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
// v.v.v.v.imp reverse in k groups
// 10 20 30 40 50 60 reverse in 3 grps
//[30 20 10] [60 50 40]
Node* reversek(Node* &head,int k){
if(head==NULL){
    return NULL;
}
if(head->next==NULL){
    return head;
}
int len=getLength(head);
if(k>len){
    cout<<"enter valid value for k"<<endl;
    return head;
}
    Node*prev=NULL;
    Node*curr=head;
    Node*forward;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    //if we still have nodes to reverse
    if(forward!=NULL){
     head->next= reversek(forward,k);
    
    }
     return prev;
}
bool checkForLoop(Node* &head){
    if(head==NULL){
        return false;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            return true;
        }
    }
    return false;
}
Node* startingNode(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            break;
        }
    }
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
return slow;
}

Node* removeNode(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            break;
        }
    }
    Node *prev=fast;
    while(slow!=fast)
    {
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
return slow;
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
Node *seventh=new Node(70);
sixth->next=seventh;
Node *eighth=new Node(80);
seventh->next=eighth;
Node *ninth=new Node(90);
eighth->next=ninth;      // loop not present
ninth->next=fifth;    // loop present
// print(head);
cout<<endl;
// cout<<"middle element is "<<getMiddle(head)->data<<endl;
// int k=4;
// head=reversek(head,k);
// print(head);
bool ans=checkForLoop(head);
if(ans){
    cout<<"loop present"<<endl;
}
else{
    cout<<"loop not present"<<endl;
}
cout<<endl;
  cout << "Loop is Present or not " << checkForLoop(head) << endl;
  cout << "Starting Point of LOOP is: " << startingNode(head) -> data << endl;
  removeNode(head);
  print(head);
  cout<<endl;
cout << "Loop is Present or not " << checkForLoop(head) << endl;

}
