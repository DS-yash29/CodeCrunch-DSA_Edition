#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = right = nullptr;
    }
};

node* constructBinaryTree(node* root){
    int data;
    cin>>data;

    if(data == -1){
        return nullptr;
    }
    root = new node(data);
    cout<<"Enter Data for left node of "<<data<<endl;
    root->left = constructBinaryTree(root->left);
    cout<<"Enter Data for right node of "<<data<<endl;
    root->right = constructBinaryTree(root->right);

    return root;
}
void preOrder(node* &head){
    if(head == nullptr){
        return ;
    }
    cout<<head->data<<" ";
    preOrder(head->left);
    preOrder(head->right);
}
void reverseTree(node* &head){
    if(head->left == nullptr && head->right == nullptr){
        return;
    }

    node* t = head->left;
    head->left = head->right;
    head->right = t;
    reverseTree(head->left);
    reverseTree(head->right);
}
int main(){
    node* head = nullptr;
    constructBinaryTree(head);cout<<endl;
    preOrder(head);cout<<endl;
    reverseTree(head);
    preOrder(head);
}

// 10 3 2 -1 -1 5 -1 -1 8 7 -1 -1 6 -1 -1