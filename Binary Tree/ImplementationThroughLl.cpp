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
int SumTree(Node* root){
    if(root==NULL) return 0;
    int leftsum = SumTree(root->left);
    int rightsum = SumTree(root->right);
    int ans = root->val + leftsum + rightsum ;
    return ans;

}
int ProductTree(Node* root){
    if(root==NULL) return 1;
    int leftpro = ProductTree(root->left);
    int rightpro = ProductTree(root->right);
    int ans = root->val * leftpro * rightpro ;
    return ans;

}
int SizeTree(Node* root){
    if(root==NULL) return 0;
    int leftsum = SizeTree(root->left);
    int rightsum = SizeTree(root->right);
    int ans = 1 + leftsum + rightsum ;
    return ans;

}
// maximum in tree
int MaxTree(Node* root){
    if(root==NULL) return INT16_MIN;
    int left = MaxTree(root->left);
    int right = MaxTree(root->right);
    int ans = max(root->val , max(left , right));
    return ans;

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
    cout<<SumTree(a);
    cout<<endl;
    cout<<ProductTree(a);
    cout<<endl;
    cout<<SizeTree(a);
    cout<<endl;
    cout<<level(a);
    cout<<endl;
    cout<<MaxTree(a); // maximum node value in tree

    return 0;
}