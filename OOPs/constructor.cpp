#include <iostream>
using namespace std;

class Solution {
public:
    int car;
    int bike;
    // constructor is called when object is created everytime
// parameterized constructor 
    Solution(int car , int bike){
        this->car= car;
        this->bike = bike;
    }
};

int main() {
    Solution obj(34,45);
    cout<<obj.car<<endl;
  
    return 0;
}