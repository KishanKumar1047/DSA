#include <iostream>
#include <string>
#include <vector>

using namespace std ;

class Book {
    public:
    string name;
    int price;
    int pages;
    int countBooks(int n){
        if(price<n) return 1;
        else return 0;

     }

     bool isBookPresent(string book){
        if(name == book) return 1;
        else return 0;

     }

};

int main() {
    Book harrypotter;
    harrypotter.name = "hello";
    harrypotter.price = 49;
    cout<<harrypotter.countBooks(90)<<endl;

    cout<<harrypotter.isBookPresent("hello");

    
    return 0;
}