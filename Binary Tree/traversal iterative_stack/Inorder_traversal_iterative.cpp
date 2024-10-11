#include <iostream>
#include <stack>
#include <vector>
#include<algorithm>

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

void postOrdertrav(Node* root){
    stack<Node*> st;
    vector<int> v;
    Node* head = root;
    while(st.size()>0 || head!=NULL){
        if(head!=NULL){
            st.push(head);
            head = head->left;
        }
        else {
            Node* temp = st.top();
            st.pop();
            v.push_back(temp->val);
            head = temp->right;
        }
    }
     for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
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

    postOrdertrav(a);
    cout<<endl;


    return 0;
}