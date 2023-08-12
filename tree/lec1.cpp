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
    left=NULL;
    right=NULL;
}
};
Node* buildtree(){
int data;
cout<<"Enter the data : ";
cin>>data;
// root=new Node(data);

if(data== -1){
    return NULL;
}
Node *root=new Node(data);
cout<<"Enter the data for inserting in the left of "<<data<<endl;
root->left=buildtree();
cout<<"Enter the data for inserting in the right of "<<data<<endl;
root->right=buildtree();
return root;//without returning how will you access the tree
}
// Node* levelOrderTraversal(Node* &root){
    
// }
void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    else{
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    }
}
void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    else{
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    }
    
}
void levelOrderTraversal(Node* &root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
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
int getHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);
    int ans=max(rightHeight,leftHeight)+1;
    return ans;
}
// int diameter(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int op1=diameter(root->left);
//     int op2=diameter(root->right);
//     int op3=getHeight(root->right)+getHeight(root->left);
//     int ans1=max(op1,max(op2,op3));
//     return ans1;
// }
bool isBalanced(Node* root) {
    if(root==NULL){
        return true;
    }   
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);
    int difference=abs(leftHeight-rightHeight);
    bool ans2=(difference<=1);
    bool leftSubtree=isBalanced(root->left);
    bool rightSubtree=isBalanced(root->right);
    if(ans2 && leftSubtree && rightSubtree){
        return true;
    }
    return false;
}
int main(){
Node* root=NULL;
root=buildtree();
cout<<endl;
cout<<"Inorder Traversal : ";
inOrder(root);
cout<<endl;
cout<<"Preorder Traversal : ";
preOrder(root);
cout<<endl;
cout<<"postorder Traversal : ";
postOrder(root);
cout<<endl;
cout<<"Level Order Traversal : ";
levelOrderTraversal(root);
cout<<endl;
int ans=getHeight(root);
cout<<"Height of the tree is "<<ans<<endl;
cout<<endl;
// int diameterOfTree=diameter(root);
// cout<<"Diameter of the tree is "<<diameterOfTree<<endl;
bool checkBalanced=isBalanced(root);
if(checkBalanced){
    cout<<"Tree is Balanced"<<endl;
}
else{
    cout<<"Tree is Not Balanced"<<endl;
}
}