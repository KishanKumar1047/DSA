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

void InorderMorris(Node* root){
    vector<int>ans;
    Node* curr = root;
    while(curr!=NULL){
        if(curr->left !=NULL){
            Node* pred = curr->left;
            while(pred->right!=NULL && pred->right!=curr ){
                pred = pred->right;
            }
            if(pred->right==NULL){ // link
                pred->right = curr;
                curr = curr->left;
            }
            else { // unlink and visit
                pred->right = NULL;
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        else {
            ans.push_back(curr->val);
            curr = curr->right;
        }
    }
    for(int i = 0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
 }

void displayTree(Node *root)
{ // inorder
    if (root == NULL)
        return;
    displayTree(root->left);
    cout << root->val << " ";
    displayTree(root->right);
}
int main()
{
    // Create the binary search tree
    Node *a = new Node(10);
    Node *b = new Node(8);
    Node *c = new Node(15);
    Node *d = new Node(7);
    Node *e = new Node(9);
    Node *f = new Node(13);
    Node *g = new Node(20);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    InorderMorris(a);
  

    return 0;
}
