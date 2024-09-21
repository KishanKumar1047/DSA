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


class Deque
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    Deque()
    {
        head = tail = NULL;
        size = 0;
    }

    void pushAtaback(int val)
    { // insert at end
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void pushfront(int val)
    { // insert at beg
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void popfront()
    {
        if (size == 0)
        {
            cout << "List is Empty" << endl;
        }
        else if(size ==1){
            head = tail = NULL;
            size--;
        }
        else
        {   
            head = head->next;
            head->prev = NULL;
            size--;
        }
    }
    void popBack()
    {
        if (size == 0)
        {
            cout << "List is Empty" << endl;
            return;
        }
        else if(size ==1){
            head = tail = NULL;
            size--;
        }
       else {
         Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
       }
    }
   int front()
    {
        if (size == 0)
        {
            cout << "queue is empty !" << endl;
            return -1;
        }
        return head->val;
    }
    int back()
    {
        if (size == 0)
        {
            cout << "queue is empty !" << endl;
            return -1;
        }
        return tail->val;
    }
       bool empty(){
        if(size==0){
            return true;
        }
        else return false;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
   Deque q;
    q.pushfront(10);
    q.pushfront(20);
    q.pushfront(30);
    q.pushfront(40);
    q.pushfront(50);
    q.pushfront(70);

    
    q.display();
    cout << q.front() << endl;
    q.popBack();
    cout << q.size << endl;
    q.display();
    return 0;

}
