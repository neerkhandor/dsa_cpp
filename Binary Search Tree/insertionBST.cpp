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
    this->right=NULL;
    this->left=NULL;
}
};
Node* insertIntoBST(Node* &root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(root->data > data){
        root->left=insertIntoBST(root->left,data);
    }
    else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}
void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
	}
}
void inorder(Node* &root){
    if(root==NULL){
        return;
    }
    //lnr
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* &root){
    if(root==NULL){
        return;
    }
    //nlr
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* &root){
    if(root==NULL){
        return;
    }
    //lrn
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
bool search(Node* &root,int target){
    if(root==NULL){
        return false;
    }
    if(root->data==target){
        return true;
    }
    if(target > root->data){
        //search in right
        return search(root->right,target);
    }
    else{
        return search(root->left,target);
    }
}
int minVal(Node* &root){
    if(root==NULL){
        //to koi min val milega hi nahi
        return -1;
    }
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
int maxVal(Node* &root){
    if(root==NULL){
        //to koi max val milega hi nahi
        return -1;
    }
    Node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
Node* deletionBst(Node* &root,int target){
    //base case
    if(root==NULL){
        return NULL;
    }
    // search root
    if(root->data==target){
        //if we found the target we will have 4 cases
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left!=NULL && root->right==NULL){
            Node*child=root->left;
            delete root;
            return child;
        }
        else if(root->left==NULL && root->right!=NULL){
            Node* child=root->right;
            delete root;
            return child;
        }
        else{
            int inorderPre=maxVal(root->left);
            root->data=maxVal(root->left);
            //now we have to delete this maxVal as its value is duplicated
            //and we will be calling it from leftsubtree because we are considering
            //inorder predecessor
            //and now the data to be deleted is the maxVal
            root->left=deletionBst(root->left,maxVal(root->left));
            return root;
        }
    }
    else if(target > root->data){
        root->right=deletionBst(root->right,target);
    }
    else if(target < root->data){
        root->left=deletionBst(root->left,target);
    }
    return root; 
}
int inorderSuccessor(Node* &root,int target){
    // first search target
    if(root==NULL){
        return -1;
    }
    int inorderSuc=-1;
    if(root->data==target){
        if(root->right!=NULL)
            inorderSuc=minVal(root->right);
    }
    else if(root->data > target){
        inorderSuc=inorderSuccessor(root->left,target);
    }   
    else{
        inorderSuc=inorderSuccessor(root->right,target);
    }
    if (inorderSuc == -1) {
            // If the target is not found in the left subtree, the current node is the inorder successor
            inorderSuc = root->data;
        }
    return inorderSuc;
}
int inorderPredecessor(Node* &root,int target){
    if(root==NULL){
        return -1;
    }
    int inorderPre=-1;
    if(root->data==target){
        if(root->left!=NULL)
            inorderPre=maxVal(root->left);
    }
    else if(root->data >target){
        inorderPre=inorderPredecessor(root->left,target);
    }   
    else{
        inorderPre=inorderPredecessor(root->right,target);
    }
    if (inorderPre == -1) {
            // If the target is not found in the left subtree, the current node is the inorder successor
            inorderPre = root->data;
    }
    return inorderPre;
}
int main(){
Node* root=NULL;
cout<<"Enter the data for root node : ";
takeInput(root);
cout<<"printing level order traversal "<<endl;
levelOrderTraversal(root);
cout<<endl;
// cout<<"printing inorder order traversal "<<endl;
// inorder(root);
// cout<<endl;
// cout<<"printing preorder order traversal "<<endl;
// preorder(root);
// cout<<endl;
// cout<<"printing post order traversal "<<endl;
// postorder(root);
// cout<<endl;

// int target=999;
// bool ans=search(root,target);
// cout<<"present or not "<<ans<<endl;
// cout<<"Minimum value is "<<minVal(root)<<endl;
// cout<<"Maximum value is "<<maxVal(root)<<endl;
// int target=100;
// root=deletionBst(root,target);
// levelOrderTraversal(root);
int target=8;
int inorderPre=inorderPredecessor(root,target);
int inorderSuc=inorderSuccessor(root,target);
cout<<"Inorder predecessor of "<<target<<" is "<<inorderPre<<endl;
cout<<"Inorder successor of "<<target<<" is "<<inorderSuc<<endl;

}