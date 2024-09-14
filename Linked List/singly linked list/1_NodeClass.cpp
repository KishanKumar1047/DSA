#include <iostream>
using namespace std;

class NOde
{ // linked list node
public:
    int val;
    NOde *next;

    NOde(int val)
    {
        this->val = val;
        this->next = NULL; // give address to ) initially
    }
};

int main()
{
    // 10 20 30 40
    NOde a(10); // by help of constructor
    NOde b(20);
    NOde c(30);
    NOde d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // now a have acceesed of b , b have of c , go on..
    // thing is ki uske pass uska address hai to usk  value print kara skta ha like

    // cout<<(a.next)->val<<endl; // b ka value
    // cout<<(b.next)->val<<endl; // c la value

    /*
        also a have accesed upto d
        a.next)->next = c ka address
        a.next)->next)->next = d ka address
        */
    // cout << (((a.next)->next)->next)->val << endl; // d ka value
    // cout << ((a.next)->next)->val << endl;         // c ka value

    // to travserse whole list , using loop
    NOde temp = a; // object copy
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = (*(temp.next)); 
    }



    return 0;
}