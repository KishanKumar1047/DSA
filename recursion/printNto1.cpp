// #include<iostream>
// #include<string>

// using namespace std ;

// void fact(int n) {
//     if (n==0) return ;
//     cout<<n<<endl;
//     fact(n - 1);
// }


// int  main () 
// {
//     int n ;
//     cin>>n;
//    fact(n);
// return 0;
// }


// print 1 to n

#include<iostream>
#include<string>

using namespace std ;

void fact(int i ,int n) {
    if (i>n) return ;
    cout<<i<<endl;
    fact(i + 1 ,n );
}


int  main () 
{
    int n ;
    cin>>n;
    
   fact(1 , n);
return 0;
}