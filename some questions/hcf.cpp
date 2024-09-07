#include<iostream>
using namespace std ;
int gdf (int a, int b) {
    int hcf = 1;
    for(int i = 1 ; i<=min(a,b);i++) {
        if (a%i==0 && b%i==0) {
            hcf = i;
        }
    }
    return hcf;
}
int  main () 
{
    int a; 
    cout<<"Enter Number 1 : " ;
    cin>>a;
    int b; 
    cout<<"Enter Number 2nd : " ;
    cin>>b;

    cout<<gdf(a,b) ;
return 0;
}      