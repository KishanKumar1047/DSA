// deconstructor is called when object go out of scope;
// generally we call if for deleting , freeup space
#include <iostream>
using namespace std;

class Solution {
public:
    int car;
    int bike; 
    Solution(int car , int bike){
        this->car= car;
        this->bike = bike;
    }
    ~Solution(){
        cout<<"when object is out of scoped , it is called"<<endl;
    }
};

int main() {
    Solution obj(34,45);
    int k = 8;
    if(k==8){
        Solution obj2(49,87);
        cout<<obj2.bike<<endl;
        cout<<obj2.car<<endl;
    }
    cout<<obj.car<<endl;
  
    return 0;
}