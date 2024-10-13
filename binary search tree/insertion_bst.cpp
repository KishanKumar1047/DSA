#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void insert(Node* root , int val){
    if(root==NULL) root = new Node(val);
    else if (root->val >val){
        if(root->left==NULL){
            root->left = new Node(val);
        }
        else {
            insert(root->left,val);
        }
    }
    else {
        if(root->right==NULL){
            root->right = new Node(val);
        }
        else {
            insert(root->right,val);
        }
    }
}

void displayTree(Node* root){ // inorder
    if(root ==NULL) return;
    displayTree(root->left);
    cout<<root->val<<" ";
    displayTree(root->right);
}

int main()
{

    Node *a = new Node(10);
    Node *b = new Node(8);
    Node *c = new Node(15);
    Node *d = new Node(7);
    Node *e = new Node(9);
    Node *g = new Node(20);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = g;
    insert(a,13);
    displayTree(a);

    return 0;
}