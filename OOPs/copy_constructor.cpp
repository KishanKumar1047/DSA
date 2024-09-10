#include <iostream>
using namespace std;

class Solution {
public:
    int car;
    int bike;

    // Parameterized constructor to initialize car and bike
    Solution(int car, int bike) {
        this->car = car; // 'this' keyword refers to the current object's car attribute
        this->bike = bike; // Assign bike to the current object's bike attribute
    }

    // Copy constructor to create a copy of an object
    Solution(const Solution &obj) {
        car = obj.car; // Copy the 'car' value from the passed object 'obj'
        bike = obj.bike; // Copy the 'bike' value from the passed object 'obj'
    }
};

int main() {
    // Create an object using the parameterized constructor
    Solution obj1(34, 45); 
    
    // Create a copy of obj1 using the copy constructor
    Solution obj2 = obj1; 
    
    // Output the values of obj1
    cout << "Object 1: car = " << obj1.car << ", bike = " << obj1.bike << endl;

    // Output the values of obj2 (copied from obj1)
    cout << "Object 2: car = " << obj2.car << ", bike = " << obj2.bike << endl;

    return 0;
}
