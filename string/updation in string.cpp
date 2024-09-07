#include <iostream>
#include <string>
using namespace std;
int main()
{
    //    string str = "Ramayan " ;
    //    str[3] = 'b';
    //    cout<<str ;

    int n;
    char string[n];
    cout << "Enter length of string : ";

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> string[i];
    }

      for (int i = 0; i < n; i++) {
        if (i%2 == 0) {
            string[i] = 'a';
        }
      }

      for (int i = 0; i < n; i++)
    {
        cout<< string[i]<<" ";
    }  

    return 0;
}