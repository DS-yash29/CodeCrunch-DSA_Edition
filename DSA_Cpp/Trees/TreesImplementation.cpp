#include<iostream>
#include<queue>
#include<stack>
using namespace std;

/*

Implementation of A BST
left node contains all the elements smaller than the root node.
right node contains all the elements greater than the root node.
Inorder->preorder->postorder

*/

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int n){
        data = n;
        left = nullptr;
        right = nullptr;
    }
};

void inOrder(Node* root){
    if(root == nullptr){

        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void addNode(Node* &root,int n){
    if(root == NULL){
        root = new Node(n);
        return ;
    }
    Node* t =  root;
    Node* check ;
    while(t!=NULL){
        if(t->data > n)
        {
            check = t;
            t = t->left;
        }
        else
        {
            check = t;
            t = t->right;
        }
    }
    if(check->data > n){
        check->left = new Node(n);
        return ;
    }
    check->right = new Node(n);
}

Node* addNodeviaRecusrion(Node* &root, int n) {
    if (root == NULL) {
        root = new Node(n);
     
    }

    if (root->data > n) {
        root->left = addNodeviaRecusrion(root->left, n);
    } else if(root->data < n) {
        root->right = addNodeviaRecusrion(root->right, n);
    }
    return root;
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void LevelOrder(Node* root){
    queue<Node*> q1;
    q1.push(root);
    q1.push(NULL);
    while(!q1.empty()){
        Node* temp = q1.front();
        q1.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q1.empty()){
                q1.push(NULL);
            }
        }
        else{
           cout<<temp->data<<" ";
            if(temp->left){
            q1.push(temp->left);
            }
            if(temp->right){
            q1.push(temp->right);
            } 
        }   
    }
}

void ReverseLevelOrder(Node* root) {
    queue<Node*> q1;
    stack <Node*> s1;
    q1.push(root);
    q1.push(NULL);
    while(!q1.empty()){
        Node* temp = q1.front();
        q1.pop();
        
        if(temp){
            if(temp->left){
            q1.push(temp->left);
            }
            if(temp->right){
            q1.push(temp->right);
            }s1.push(temp);   
        } 
    }
    while(!s1.empty()){
        cout<<s1.top()->data<<" ";
        s1.pop();
    }
}


int main(){
  Node* root = NULL;
  root = new Node(15);
  addNode(root,23);
  addNode(root,-435);
  addNode(root,32);
  addNode(root,12);
  inOrder(root);cout<<endl;
  preOrder(root);cout<<endl;
  postOrder(root);cout<<endl;cout<<endl;
  LevelOrder(root);cout<<endl;cout<<endl;
  ReverseLevelOrder(root);

}