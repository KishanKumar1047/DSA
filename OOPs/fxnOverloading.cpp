#include <iostream>
using namespace std;


class Bike {
    public:
    static int Noofbikes; 
    int tyresize;
    int enginesize;

    // contructor overloading
    Bike(int ts , int es = 200) : tyresize(ts) ,enginesize(es) {} // intialisation list
    Bike(int ts ) : tyresize(ts) ,enginesize(567) {} 
    Bike() : tyresize(78) ,enginesize(23) {} 

};

void function(int n , int m) { 
    cout<<m+n<<endl;
    
}
void function(int n ) { 
    cout<< n + 177<<endl;
    
}

int main() {
  int n  = 123;
  int m = 5;  
  function(n,m);
  function(n);
  Bike Bullet(34,56);
  Bike Bajaj;
  cout<<Bullet.tyresize<<endl;
  cout<<Bullet.enginesize<<endl;
  cout<<Bajaj.enginesize<<endl;
  cout<<Bajaj.tyresize<<endl;
  return 0;
}