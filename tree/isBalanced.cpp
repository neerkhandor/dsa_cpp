#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(){
    int data;
    cout<<"Enter the data : ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node *root=new Node(data);
    cout<<"Enter the data to left of "<<data<<endl;
    root->left=buildTree();
    cout<<"Enter the data to right of "<<data<<endl;
    root->right=buildTree();
    return root;
}
void levelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
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
int getHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);
    int ans=max(leftHeight,rightHeight)+1;
    return ans;
}
bool isBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);
    int difference=abs(leftHeight-rightHeight);
    bool ans=(difference<=1);
    bool leftBalanced=isBalanced(root->left);
    bool rightBalanced=isBalanced(root->right);
    if(ans && leftBalanced && rightBalanced){
        return true;
    }
    return false;
}
int main(){
Node *root=NULL;
root=buildTree();
levelOrderTraversal(root);
cout<<endl;
int height=getHeight(root);
cout<<"Height of the tree is "<<height<<endl;
bool checkBalance=isBalanced(root);
if(checkBalance){
    cout<<"Tree is Balanced"<<endl;
}
else{
    cout<<"Tree is Not Balanced"<<endl;
}

}