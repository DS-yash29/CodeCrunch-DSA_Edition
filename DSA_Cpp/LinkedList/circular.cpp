#include<iostream>
using namespace std;

/*

    A Linked List Where the last pointer points towards the first.
    1->2->3->1
*/
class Node{
    public:
    int data;
    Node* next ;
    Node(int n){
        data = n;
        next = NULL;
    }
};

void insertNode(Node* &tail,int n){
    Node* temp = new Node(n);
    if(tail == NULL){
        tail = temp;
        return ;
    }

    if(tail->next == tail){
        tail->next = temp;
        temp->next = tail;
        temp = tail;
    }else{
        Node* t = tail->next;
        temp->next = t;
        tail->next = temp;
        temp = tail;
    }


}


int main(){
    Node* tail = NULL;
    Node* n1 = new Node(10);
    tail = n1;
    n1->next = n1;
    cout<<n1->data<<endl;
    // Node* n2 = new Node(20);
    // Node* n3 = new Node(30);
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n1;
    // int y = 16;
    // Node* t = n1;
    // while(y--){
    //     cout<<t->data<<" ";
    //     t = t->next;
    // }

    insertNode(n1,20);
    cout<<n1->data<<" "<<n1->next->data;
}