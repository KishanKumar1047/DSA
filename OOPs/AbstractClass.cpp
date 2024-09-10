// use of abstract class

#include <iostream>
using namespace std;

class A
{
public:
    int a_ka_public;
    virtual void show() = 0; // now it is abstract class , and it is mandatory to be in every child class
};
class B :  public A
{
public:
    int b_ka_public;
    void show(){
        cout<<"fxn show is being redefined in B"<<endl;
    }
};



int main()
{
 B obj;
 obj.show();

    return 0;
}