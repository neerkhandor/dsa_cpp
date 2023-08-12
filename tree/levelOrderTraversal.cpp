#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
int data;
Node* left;
Node *right;
Node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
}
};
Node* buildtree(){
int data;
cout<<endl;
cout<<"Enter the data : ";
cin>>data;
cout<<endl;

if(data== -1){
    return NULL;
}
Node *root=new Node(data);
cout<<"Enter the data for inserting in the left of "<<data<<":";
root->left=buildtree();
cout<<"Enter the data for inserting in the right of "<<data<<":";
root->right=buildtree();
return root;//without returning how will you access the tree
}
void levelOrderTraversal(Node* &root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
void levelOrderInLine(Node* &root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
   // q.push(NULL);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node*temp=q.front();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            cout<<q.front()->data<<" ";
        }
        //cout<<q.front()->data<<" ";
         q.pop();
        cout<<endl;
       
        // Node*temp=q.front();
        // q.pop();
        // cout<<"temp->data"<<temp->data<<endl<<endl;
        // if(temp==NULL){
        //     cout<<endl;
        //     if(!q.empty()){
        //         //    q.push(NULL);
        //     }
        // }
        // else{
        // cout<<temp->data<<" ";
        // if(temp->left){
        //     q.push(temp->left);
        // }
        // if(temp->right){
        //     q.push(temp->right);
        // }
        // }
        
    }
}

int main(){
Node* root=NULL;
root=buildtree();
levelOrderInLine(root);
}