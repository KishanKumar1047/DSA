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
void displayTree(Node* root){
    if(root ==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

void find(Node* root ,int start, Node* first ){
    if(root==NULL)return ;
    if(root->val==start) {
        first = root;
        return;
    }
    find(root->left,start,NULL);
    find(root->right,start,NULL);
}
// for finding height
int level(Node* root){
    if(root==NULL) return 0;
    int left = level(root->left);
    int right = level(root->right);
    return 1 + max(left , right);

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

    displayTree(a); // preorder traversal
    cout<<endl;
    find(a,4,NULL);
    return 0;
}