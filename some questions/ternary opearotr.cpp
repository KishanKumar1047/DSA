
#include <iostream>
using namespace std;

int main() {
    int x ;
    cout<<"Enter number obtained : ";
    cin>>x;
    string result = (x > 33) ? "pass" : "fail" ;
    cout<< result ;

    return 0;
}