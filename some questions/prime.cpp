#include<iostream>
using namespace std ;
int  main ()
{
    int n ;
    cin>>n;
    for (int i = 1 ; i <= n ; i++) {
        // cout<< "HELLO WORLD !"<<endl  ;
        if (i % 2 == 0) {
            continue;
        }
        else {
           cout<<i<<endl;
        };
    };
return 0;
}

 // prime

#include <iostream>
using namespace std;
int main()
{
    int n;
    bool prime = true;
    cout << "Enter Number :";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << "number is prime";
    }
    else
    {
        cout << "Composite number";
    }

    return 0;
}

// count number of digits in a number

#include<iostream>
using namespace std ;

int  main () 
{
    int n ;
    cout <<"Enter number :" ;
    cin>>n;
    int  count = 0 ;
     int a =  n ;
    while(n>0) {
        n = n / 10 ;
        count ++ ;

    }
    if (a == 0) {
        cout<<"1";
    }
    else {
        cout<<count;
    }
return 0;
}