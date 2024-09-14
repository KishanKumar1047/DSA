// implementation of linked list
#include <iostream>
using namespace std;

class Node
{ // user-defined datatype
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void displayRev(Node* tail){
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}

// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<"  ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// void displayrecRev(Node* head){
//    if(head==NULL) return ;
//     display(head->next);
//     cout<<head->val<<" ";
// }
// void displayrec(Node* head){
//    if(head==NULL) return ;
//     cout<<head->val<<" ";
//     display(head->next);
// }

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(60);
    Node *f = new Node(70);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;
    f->prev = e;

    displayRev(f);

    return 0;
}