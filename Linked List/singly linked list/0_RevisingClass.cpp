#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    int rno;

    Student(string name, int marks, int rno) // parameterizeed constrcuctor
    {
        this->name = name;// pointer heading
        this->marks = marks;
        this->rno = rno;
    }
};

Student change(Student *s) // object as fxn
{
    s->name = "kishan";
}

int main()
{
    // Student s("Arjun",45,51);
    // // cout<<s.name<<endl;
    // // change(s);
    // //  cout<<s.name<<endl;// also through pointers

    // Student *ptr = &s;
    //  cout<<s.name<<endl;
    // // (*ptr).name = "kishaan";
    //  ptr->name = "rahgav"; // ek hi baat hai
    //   cout<<s.name<<endl;

    Student *s = new Student("raghav", 67, 89); // dynamic allocation , pointer to pointer
    cout << s->name << endl;
    change(s);
    cout << s->name << endl;

    return 0;
}