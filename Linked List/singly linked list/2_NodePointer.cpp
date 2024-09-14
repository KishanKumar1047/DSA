// implementation of linked list
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
     Node* temp = head;
    while(temp !=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size(Node* head){
     Node* temp = head;
     int n = 0;
    while(temp !=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

void InsertAtEnd(Node* head , int val){
    Node* t = new Node(val);
    while(head->next != NULL){
        head = head->next;
    }
    head->next = t;
}

int main() {
    Node* a = new Node(10); // dynamic allocation
    // heap memory
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(60);
    Node* f = new Node(70);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    //cout<<a->val;

   display(a);
   cout<<size(a); // display size of linked list
   InsertAtEnd(a,80);
   display(a);

    // now through it i seasy to access all
   // cout<<a->next->next->next->val; // value of d




    return 0;
}