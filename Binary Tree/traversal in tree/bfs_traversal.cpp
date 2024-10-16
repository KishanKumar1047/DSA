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
int levels(Node* root){
    if(root==NULL) return 0;
    int left = levels(root->left);
    int right = levels(root->right);
    return 1 + max(left , right);

}
void nthlevel(Node* root , int curr , int level){
    if(root ==NULL) return;
   if(curr==level) {
    cout<<root->val<<" ";
    return;
   }
   nthlevel(root->left , curr+1 , level);
   nthlevel(root->right , curr+1 , level);
}
void eachlevel(Node* root){
    int n = levels(root);
    for(int i = 1;i<=n ;i++){
        nthlevel(root ,1,i);
        cout<<endl;
    }
}
// reverse traversal
void reversetrav(Node* root , int curr , int level){
    if(root ==NULL) return;
   if(curr==level) {
    cout<<root->val<<" ";
    return;
   }
   reversetrav(root->right , curr+1 , level);
   reversetrav(root->left , curr+1 , level);
}
void Reachlevel(Node* root){
    int n = levels(root);
    for(int i = 1;i<=n ;i++){
        reversetrav(root ,1,i);
        cout<<endl;
    }
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

   eachlevel(a);
   cout<<endl;
    Reachlevel(a);
   cout<<endl;// from right to left

    return 0;
}