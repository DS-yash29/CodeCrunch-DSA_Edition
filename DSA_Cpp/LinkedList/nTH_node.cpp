#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    
    node(int d) {
        data = d;
        next = nullptr;
    }
};

void insertNode(node* &head, int n) {
    node* node1 = new node(n);
    
    if (head == nullptr) {
        head = node1;
        return;
    }

    if (head->next == nullptr) {
        head->next = node1;
        return;
    }

    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = node1;
}

void traverse(node* &head) {
    if (head == nullptr) {
        return;
    }

    node* temp = head;
    while (temp->next != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

void nth_node(node* &head, int n) {
    int length = 0;

    if (head == nullptr) {
        return;
    }
    node* temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    temp = head;
    cout << "Length of the List: " << length << " Data at head -> " << temp->data << endl;
    cout << "Position from the end: " << n << endl;
    if (n <= 0) {
        cout << "Invalid position\n";
        return;
    }
    if(n>length)
        n = n % length;
    int targetPosition = length - n;

    for (int i = 0; i < targetPosition; i++) {
        temp = temp->next;
    }
    cout << "Data at position " << n << " from the end: " << temp->data << endl;
}

int main() {
    node* head = nullptr;
    insertNode(head, 1);
    for (int i = 2; i < 5; i++) {
        insertNode(head, i * i);
    }
    traverse(head);
    nth_node(head, 883);
    return 0;
}
