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
void display(Node* head){ // recursvie fxn to display linked list
    while(head  == NULL) return ;
    cout<<head->val<<" ";
    display(head->next);

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





    return 0;
}