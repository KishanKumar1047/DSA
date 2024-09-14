// implementation of linked list
#include <iostream>
using namespace std;

class Node
{ // user-defined datatype
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList()
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
        else if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        else
        {
            head = head->next;
            size--;
        }
    }
    void DeleteAtTail()
    {
        Node *temp = head;
        if (size == 0)
        {
            cout << "List is Empty" << endl;
        }
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
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
            t->next = temp->next;
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
            size--;
        }
    }

    void getIdx(int idx)
    {
        if (idx < 0 || idx > size)
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
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            cout << temp->val << endl;
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

int main()
{
    LinkedList ll;
    ll.InsertAtTail(10);   //{10}
    ll.InsertAtTail(20);   // {10,20}
    ll.display();          // 10,20
    ll.InsertAtIdx(1, 90); // 10,90,20
    ll.InsertAtHead(89);   // 89 10 90 20
    ll.InsertAtHead(345);  // 345 89 10 90 20
    ll.InsertAtIdx(3, 55); // 345 89 10 55 90 20
    ll.DeleteAtHead();
    ll.display();
    cout << ll.size << endl; // 5
    ll.getIdx(0);
    ll.DeleteAtTail();
    ll.display();            // 89 10 55 90
    cout << ll.size << endl; // 4
    ll.DeleteAtIdx(3);
    ll.display(); // 89 10 55

    return 0;
}