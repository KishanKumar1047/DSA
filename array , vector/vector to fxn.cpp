#include <iostream>
#include <vector>

using namespace std;
// void change (vector <int> a) 
// {  // therefore , its call by value
//     a[0] = 100;
    
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a.at(i) << " ";
//     }
//     cout << endl;
// }

void change (vector <int>& a) // now its call by refernce
{
    a[0] = 100;
    
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(12);
    v.push_back(90);


    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    change(v) ;
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    
   return 0;

}
