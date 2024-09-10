// use of virtual fxn

#include <iostream>
using namespace std;

class A
{
public:
    int a_ka_public;
    virtual void show(){ // virtual fxn run time binding
        cout<<"fxn show in a now"<<endl;
    }
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
// obj.show();
// obj.A ::show();
A *a;
a = new B ;
a->show();
a = new A ;
a->show();



    return 0;
}