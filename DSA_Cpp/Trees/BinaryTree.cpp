#include<iostream>
#include<queue>
using namespace std;

/*
        1
       2 3
      4 5 6
*/

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int n){
        data = n;
        left = nullptr;
        right = nullptr;
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

void inOrder(node* &root){
    if(root == nullptr){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int count(node* root){
    if(root == nullptr){
        return 0;
    }

    int left = count(root->left);
    int right = count(root->right);

    return left+right+1;
}
// Counting the no of elements iteratively using recursion
int count_iterative(node* root){
    if(root == nullptr)
        return 0;
    queue<node*> q1;
    q1.push(root);
    int i = 1;
    while(!q1.empty()){
        node* temp = q1.front();
        q1.pop();
        if(temp->left){
            q1.push(temp->left);
            i++;
        }
        if(temp->right){
            q1.push(temp->right);
            i++;
        }
    }return i;
    
}

int findHieght(node* root){
    if(root == nullptr){
        return -1;
    }
    queue<node*> q1;
    q1.push(root);
    q1.push(nullptr);
    int i = 0;
    while(!q1.empty()){
        node* temp = q1.front();
        q1.pop();
        if(temp->left && temp->right){
            q1.push(temp->left);
            q1.push(temp->right);
            q1.push(nullptr);
            i++;
        }
        else if(temp->left && temp->right == nullptr){
            q1.push(temp->left);
            i++;
        }
        else if(temp->left == nullptr && temp->right != nullptr){
            q1.push(temp->right);
            i++;
        }
        else if(temp == nullptr){
            i--;
        }
    }return i;
}
int findHeight2(node* root) {
    if (root == nullptr) {
        return -1; // Height of an empty tree is -1
    }

    queue<node*> q;
    q.push(root);
    int height = 0; // Initialize height to 0

    while (!q.empty()) {
        int nodeCount = q.size(); // Number of nodes at current level

        /* Process all nodes at the current level */
        while (nodeCount > 0) {
            node* current = q.front();
            q.pop();

            /* Enqueue left child if exists */
            if (current->left != nullptr) {
                q.push(current->left);
            }

            /* Enqueue right child if exists */
            if (current->right != nullptr) {
                q.push(current->right);
            }

            nodeCount--;
        }

        /* Increment height after processing each level */
        height++;
    }

    return height - 1; // Subtract 1 to account for starting height from -1

}
int height_tree(node* &root){
    if(root == nullptr){
        return 0;
    }
    int left_st = height_tree(root->left);
    int right_st = height_tree(root->right);

    return max(left_st,right_st) + 1;
}

int countLeaves(node* &root){
    if(root->right == nullptr && root->left == nullptr){
        return 1;
    }
    int left_leaves = countLeaves(root->left);
    int right_leaves = countLeaves(root->right);
    return left_leaves+right_leaves;
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
    node* root = nullptr;
    cout<<"Enter Data for root node"<<endl;
    root = constructBinaryTree(root);
    inOrder(root);cout<<endl;
    // preOrder(root);
    // cout<<"\nSize of Binary Tree "<<count(root)<<endl;
    // cout<<"\nSize of Binary Tree By Iteration "<<count_iterative(root)<<endl;
    // cout<<"Hieght  of Binary Tree By Iteration "<<height_tree(root)<<endl;
    // cout<<"\n Leaves in the right subtree is equal to : "<<countLeaves(root);
    reverseTree(root);
    inOrder(root);cout<<endl;

}
// 6 4 1 -1 -1 2 -1 -1 5 3 -1 -1 4 -1 -1  