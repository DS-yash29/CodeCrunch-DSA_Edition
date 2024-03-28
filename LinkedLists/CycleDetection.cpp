#include<iostream>
#include<math.h>
using namespace std;

class Node{
    public:
    int data;
    Node* ptr;
    Node(){
        ptr = NULL;
    }
    Node(int n){
        data = n;
        ptr = NULL;
    }
};

class singlyLL{
    public:
    Node* head;
    singlyLL(int n){
        head = new Node(n);
    }
    void insertElem(int n);
    void PrintLL();
    void reverseLL();
    bool cycle();
    int lengthofCycle();
};

void singlyLL :: insertElem(int n){
    Node* temp = new Node(n);
    if(head == NULL){
        head = temp;
        return;
    }
    if(head->ptr == NULL){
        head->ptr = temp;
        return;
    }

    Node* t = head;
    while(t->ptr != NULL){
        t = t->ptr;
    }
    t->ptr = temp;
}
void singlyLL::PrintLL() {
    if (head == NULL) {
        cout << "No Data To Display" << endl;
        return;
    }

    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->ptr;
    }
    cout << endl;
}

 
void singlyLL ::  reverseLL(){
    Node* curr = this->head;
    Node* prev = NULL;
    Node* n = NULL;
    while(curr!=NULL){
        n = curr->ptr;
        curr->ptr = prev;
        prev = curr;
        curr = n;
    }
    this->head = prev;
    return;
}

bool singlyLL::cycle(){
    Node* slow = this->head;
    Node* fast = this->head->ptr;
    while(fast!=NULL && fast->ptr != NULL){
        if(fast==slow){
            return true;
        }
        slow = slow->ptr;
        fast = fast->ptr->ptr;
    }
    return false;
}

int singlyLL::lengthofCycle(){
    if(this->cycle()){
        int i = 0;
        Node* slow = this->head;
        Node* fast = this->head->ptr;
        Node* intersection = slow;
        
        while(fast!=NULL && fast->ptr != NULL){
            if(fast==slow){
                intersection = slow;
                break;
            }
            slow = slow->ptr;
            fast = fast->ptr->ptr;
        }
        Node * t = intersection;
        intersection = intersection->ptr;
        while(intersection!=t){
            i++;
            intersection=intersection->ptr;
        }
        return i;
    }
    return 0;
}

int main(){
    singlyLL l1(1);
    singlyLL l2(1);
    for(int i = 2;i<10;i++){
        l1.insertElem(i);
        l2.insertElem(i);
    }

    Node* t = l2.head;
    int i = 0;
    while(i<8){
        i++;
        t = t->ptr;
    }
    t->ptr = l2.head->ptr;
    cout<<l1.lengthofCycle()<<endl;
    cout<<l2.lengthofCycle();

}