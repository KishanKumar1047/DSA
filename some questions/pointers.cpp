// #include<iostream>
// using namespace std ;
// int  main () 
// {
//     int x = 6;
//     int* p = &x ;
//     cout<<x<<endl;// value of x
//     cout<<&x<<endl;// address of variable
//     cout<<p<<endl;// value of variable address
//     cout<<*p<<endl;// value of x
//     *p = 56;
//     cout<<*p<<endl;
//     cout<<p<<endl;// after updation no change in address value
//     cout<<x<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std ;
// int  main () 
// {
//     int x;// input through pointer
//     int* p = &x;
//     cout<<"Enter number :";
//     cin>>*p;
//     cout<<x;
// return 0;
// }

 // swaping of two numbers using function

#include<iostream>
using namespace std ;
// call by reference
int swap(int *x,int *y) {
	int z = *x;
	*x =*y;
	*y = z;
}
int main(){
	int num1 = 10, num2 = 20;
	cout<<"number before swaping is : " ;
	cout<<num1 << " and " <<num2<<endl ;
	
	
	swap(&num1 , &num2) ;
	cout << "After swapping is :";
	cout<< num1 ;
	cout <<"\n" ;
	cout << num2;
	return 0;
	
}