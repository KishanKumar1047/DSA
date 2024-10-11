#include <iostream>
#include <string>
#include <vector>

using namespace std ;

class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;

    }

};
void preorderT(Node* root){
    if(root ==NULL) return;
    cout<<root->val<<" ";
    preorderT(root->left);
    preorderT(root->right);
}
void InorderT(Node* root){
    if(root ==NULL) return;
    InorderT(root->left);
    cout<<root->val<<" ";
    InorderT(root->right);
}
void PostorderT(Node* root){
    if(root ==NULL) return;
    PostorderT(root->left);
    PostorderT(root->right);
    cout<<root->val<<" ";
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    preorderT(a); // preorder traversal , root lefft right
    cout<<endl;
    InorderT(a); // inorder traversal , l r right
    cout<<endl;
    PostorderT(a); // inorder traversal , l  right root
    cout<<endl;
    

    return 0;
}