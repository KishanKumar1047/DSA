// use of virtual class

#include <iostream>
using namespace std;

class A
{
public:
    int a_ka_public;
    A (){
        cout<<"a ka constructor"<<endl;
    }
};
class B :   virtual  public A
{
public:
    int b_ka_public;
     B (){
        cout<<"B ka constructor"<<endl;
    }
};
class C : virtual public A
{
public:
    int c_ka_public;
     C (){
        cout<<"C ka constructor"<<endl;
    }
};
class D : public B , public C
{
public:
    int D_ka_public; // now it will have 2 instance of A , can be resolved by two way 1. virtual 2. scope
     D(){
        cout<<"D ka constructor"<<endl;
    }
    // void show(){
    //     B: a_ka_public;    // method 2
    // }
    void show(){
         cout<<a_ka_public;    // method 1
    }
};


int main()
{
D obj;
obj.a_ka_public= 100;
obj.show();


    return 0;
}