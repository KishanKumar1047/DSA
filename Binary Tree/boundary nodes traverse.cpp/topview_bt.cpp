#include <iostream>
#include <queue>
#include <unordered_map>

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

Node* construct (int arr[] , int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j =2 ;
    while(q.size()>0 &&i<n){
        Node* temp = q.front();
        q.pop();
        Node* l ;
        Node* r ;
        if(arr[i] != INT16_MIN) l = new Node(arr[i]);
        else l = NULL;
        if( j!=n && arr[j] != INT16_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+= 2;
        j+= 2;

    }
    return root;
}


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

void topview(Node* root){
    unordered_map<int ,int>m;
    queue< pair<Node* ,int> >q ;
    pair<Node* ,int> r;
    r.first = root;
    r.second = 0;
    q.push(r);
    while(q.size()>0){
        Node* temp = (q.front()).first ;
        int level = (q.front()).second;
        q.pop();
        if(m.find(level)==m.end()){
            m[level] = temp->val;
        }
        if(temp->left!=NULL){
             pair<Node* ,int> p;
            p.first = temp->left;
            p.second = level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
             pair<Node* ,int> p;
            p.first = temp->right;
            p.second = level+1;
            q.push(p);
        }
    }
    int minLevel = INT_FAST16_MAX;
    int maxlevel = INT16_MIN ;
    for(auto x : m){
        int level = x.first ;
        minLevel = min(minLevel ,level);
        maxlevel = max(maxlevel ,level);
    }
    for(int i = minLevel ; i<=maxlevel ; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
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


    int arr[] = {1,2,3,4,5,INT16_MIN , 6 ,INT16_MIN ,INT16_MIN,7,8,};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    eachlevel(root);

   // BoundaryTraverse(a);
    topview(root);

    return 0;
}