#include<iostream>
#include<math.h>
#include<string>
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

bool string_compare(string s1,string s2){
        int a = s1.length();
        int b = s2.length();
        int i = 0;
        if(a==1){
            return s1[0] == s2[0];
        }
        while(i<a){
            if(s1[i] != s2[b-i-1]) return false;
            i++;
        }
        return true;
    }
    
int getLength(singlyLL h){
    int cnt = 0;
    Node* t = h.head;
    while(t!=NULL){
        cnt++;
        t = t->ptr;
    }
    
    return cnt;
}

 bool isPalindrome(singlyLL h) {
        string s1,s2;
        s1 = s2 = "";
        int x = getLength(h);
        int i = 0;
        Node* t1 = h.head;
        while(i<x/2){
            s1 += to_string(t1->data);
            i++;
            t1= t1->ptr;
        }
        if(x%2!=0){
            i++;
            t1 = t1->ptr;
        } 
        while(i<x){
            s2 += to_string(t1->data);
            i++;
            t1= t1->ptr;
        }

        return string_compare(s1,s2);
                
    }

int main(){

    singlyLL h1(1);
    h1.insertElem(0);
    h1.insertElem(0);
    h1.insertElem(1);
    if(isPalindrome(h1)){
        cout<<"Palindromic Linked List\n";
    }
    else{
        cout<<"Not a Palindrome\n";
    }

}