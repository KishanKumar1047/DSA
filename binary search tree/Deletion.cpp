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

Node* iop(Node* root){ // inorder predecessor
    Node* pred = root->left;
    while(pred->right !=NULL){
        pred = pred->right;
    }
    return pred;
    
}

Node *Delete(Node *root, int key)
{   
    if(root==NULL) return NULL;
    if (root->val == key)
    {
        if (root->left == NULL && root->right == NULL)
        { // leaf node ka deletion
            return NULL;
        }
        if (root->left == NULL || root->right == NULL)
        { // if node has one child
            if (root->left != NULL)
                return root->left;
            else
                return root->right;
        }
        // case 3 : if node has 2 child
         if (root->left != NULL && root->right != NULL){
            Node* pred = iop(root);
            root->val = pred->val;
             root->left = Delete(root->left, pred->val); // to delete extra node value of inorder prede

         }
    }
    else if (root->val > key)
    { // go left
        root->left = Delete(root->left, key);
    }
    else
    { // go right
        root->right = Delete(root->right, key);
    }
    return root;
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

    // Display tree before deletion
    cout << "Tree before deletion (inorder traversal): ";
    displayTree(a);
    cout << endl;

    // Delete node with value 15 (for example)
    a = Delete(a, 15);

    // Display tree after deletion
    cout << "Tree after deletion of 15 (inorder traversal): ";
    displayTree(a);
    cout << endl;

    return 0;
}
