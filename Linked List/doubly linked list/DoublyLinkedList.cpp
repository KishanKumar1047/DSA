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


class DDL
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    DDL()
    {
        head = tail = NULL;
        size = 0;
    }

    void InsertAtTail(int val)
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

    void InsertAtHead(int val)
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

    void DeleteAtHead()
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
    void DeleteAtTail()
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

    void InsertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "invalid position" << endl;
        }
        else if (idx == 0)
        {
            InsertAtHead(val);
        }
        else if (idx == size)
        {
            InsertAtTail(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            temp->next->prev = t;
            t->next = temp->next;
            t->prev = temp;
            temp->next = t;
            size++;
        }
    }

    void DeleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "List is Empty" << endl;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "invalid Index" << endl;
        }
        else if (idx == 0)
        {
            DeleteAtHead();
        }
        else if (idx == size-1)
        {
            DeleteAtTail();
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }

    void getIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "invalid idx" << endl;
        }
        else if (idx == 0)
        {
            cout << head->val << endl;
        }
        else if (idx == size-1)
        {
            cout << tail->val << endl;
        }
        else
        {if(idx<size/2){
            
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            cout << temp->val << endl;
        }
        else {
            
            Node *temp = tail;
            for (int i = 1; i <size - idx; i++)
            {
                temp = temp->prev;
            }
            cout << temp->val << endl;
        }
        }
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
    DDL dl;
    dl.InsertAtTail(78);
    dl.InsertAtTail(455);
    dl.InsertAtTail(45);
    dl.InsertAtHead(45);
    dl.display(); // 45 78 455 45
    dl.InsertAtIdx(2,99);
    dl.InsertAtIdx(4,98);
    dl.display(); // 45 78  99 455 98 45
    // cout<<dl.size<<endl ; // 6
    // dl.DeleteAtHead();// 78 99 455 98 45
    // dl.DeleteAtTail();// 78 99 455 98 
    // dl.DeleteAtIdx(2);// 78 99 98
    // dl.display(); 
    dl.getIdx(3);  // 455



    return 0;

}
