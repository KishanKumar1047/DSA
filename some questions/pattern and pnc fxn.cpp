// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a;
//     cin>>b;
//     cin>>c;
//     cout<<endl;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout <<" * ";
//         }
//         cout << "\n";
//     }

//     for (int i = 0; i < b; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<< " * ";
//         }
//         cout << "\n";
//     }
  
//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout <<" * ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// by using function
// #include<iostream>
// using namespace std ;
// void pattern(int a) {
//        for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout <<" * ";
//         }
//         cout << "\n";
//     }

// }
// int  main () 
// {
//     pattern(3);
//     pattern(4);
//     pattern(5);
// return 0;
// }

// pnc ka 
#include<iostream>
using namespace std ;

int fact(int x) {
    int f = 1;
    for(int i = 2 ;i<= x;i++) {
        f *= i;
    }
    return f;
}

int main (){
    int n;
    cout<<"Enter Number n  : " ;
    cin>> n;
    int r;
    cout<<"Enter Number r : " ;
    cin>> r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr = nfact/(nrfact*rfact) ;
    cout<<ncr ;
	
	return 0;
}
