#include<iostream>
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


int main(){
    int *arr = new int[6];
    cout<<"Enter Elements in an array\n";
    for(int i = 0;i<6;i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    singlyLL l1(arr[0]);
    for(int i = 1;i<6;i++){
        l1.insertElem(arr[i]);
    }
    cout<<"Elements in an Array\n";
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n Elements of Linked Lists\n";
    l1.PrintLL();
}