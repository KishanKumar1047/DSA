#include <iostream>
using namespace std;

class Bike {
    public:
    static int Noofbikes; // now this belongs to class
    int tyresize;
    int enginesize;

    Bike(int ts , int es = 200) : tyresize(ts) ,enginesize(es) {} // intialisation list

};

int Bike ::Noofbikes = 10; // since it belongs to class now , it can be accessed through class only

int main() {
    Bike Bullet(245,5678);
    Bike honda(80,178);

    Bullet.increaseNoofbikes();
    cout<<Bullet.Noofbikes<<endl;

  
    return 0;
}