#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};
void print(Node* head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLength(Node *&head){
    if(head==NULL){
        return 0;
    }
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
Node *reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
Node* revereseUsingRec(Node *prev,Node* curr){
    // prev and curr are updating so we will pass them as parameters
    if(curr==NULL){
        return prev;
    }
    Node* forward=curr->next;
    curr->next=prev;
    return revereseUsingRec(curr,forward);
}
Node * revereseUsingRec2(Node *prev,Node *curr){
    if(curr==NULL){
        return prev;
    }
    Node* forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
    return revereseUsingRec2(prev,curr);
}
Node* getMiddle(Node* &head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
bool isLoopPresent(Node* &head){
    if(head==NULL){
        cout<<"Ll is empty "<<endl;
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
Node* startingPointOfLoop(Node* &head){
    if(head==nullptr)
        return nullptr;
    Node* slow = head;
    Node * fast = head;
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
    while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
    }
    return slow;
}
Node* removeLoop(Node* &head){
    if(head==NULL){
        return NULL ;
    }
    // to remove loop first we have to find the loop and then we can 
    // find the starting point of the loop and before the fast pointer we can 
    // place the temp node 
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            slow=head;
            break;
        }
    }
    Node* temp=fast;
        while(slow!=fast){
            // temp is one step behind fast node
            temp=fast;
            fast=fast->next;
            slow=slow->next;
    }
    temp->next=NULL;
    return slow;
}
Node* reverseK(Node* &head,int k){
    if(head==nullptr){
        return nullptr;
    }
    int len=getLength(head);
    // the below step will keep the remaining elements if they are less than k to its correct positio without deleting it
    if(k>len){
        return head;
    }
    int count=0;
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=NULL;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=nullptr){
        head->next=reverseK(forward,k);
    }

    return prev;
}
int main(){
Node * head=new Node(10);
Node * second=new Node(20);
Node * third=new Node(30);
Node * fourth =new Node(40);
Node * fifth =new Node(50);
Node * sixth =new Node(60);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=head;
Node* prev=NULL;
Node* curr=head;
// print(head);
// cout<<endl;
// cout<<"length of the ll is "<<getLength(head);
// cout<<endl;
// head=reverse(head);
// print(head);
// head=revereseUsingRec(prev,curr);
// print(head);
// cout<<endl;

// head=revereseUsingRec2(prev,curr);
// print(head);
// cout<<"Middle node is "<<getMiddle(head)->data<<endl;

cout<<"loop is present or not ? "<<isLoopPresent(head)<<endl;
// cout<<"Starting point of the loop is "<<startingPointOfLoop(head)->data<<endl;
// removeLoop(head);
// print(head);
// int k=4;
// head=reverseK(head,k);
// print(head);
}