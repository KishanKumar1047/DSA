#include<iostream>
using namespace std ;
int  main () 
{
    int arr[] = {3 , 4 , 5, 6, 7, 8, 5,6,7, 56, 7,8 ,89, 90, 87 , 45,45,5  };
    int n = sizeof(arr)/sizeof(arr[0]) ;
    cout<<n<<endl;
    cout<<&arr[0]<<endl;//0x61feb4

    cout<<&arr[1]<<endl;//0x61feb8
    cout<<&arr[2]<<endl;// since contunues memory allocation therefore address differ by 4 bits , acdng to  octadecimal system
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr[5]<<endl;
    cout<<&arr[6]<<endl;
    cout<<&arr[7]<<endl;
    cout<<&arr[8]<<endl;
    cout<<&arr[9]<<endl;
    cout<<&arr[10]<<endl;
    cout<<&arr[11]<<endl;
    cout<<&arr[12]<<endl;
    cout<<arr<<endl; // address of array == &arr = = address of arr[0]
return 0;
}

// either x is present or not .
#include<iostream>
using namespace std ;
int  main () 
{
    int size , x ;
    bool yes = true;
    cout<<"Enter size of array :" ;
    cin>>size;
    cout<<"Enter element to find in array ";
    cin>>x;
    int arr[size] ;
    for (int i = 0 ; i<size ; i++) {
        cin>>arr[i];
    }

    for (int i = 0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0 ; i<size ; i++) {
        if(arr[i] == x) {
            yes = false;
        
        }
    }
    if (yes == false) {
        cout<<"x is present";

    }
    else {
        cout<<"x is absent";
    }

return 0;
}

#include<iostream>
using namespace std ;
int  main () 
{
    int arr[7] = { 3 , 4 , 5, 89, 90 , 91 , 92};
    int max = arr[0] ;
    int sm = arr[0];
    for (int i = 1 ; i<7 ; i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    for(int i = 1;i<7;i++) {
        if (arr[i]>sm && arr[i]!= max) {
            sm = arr[i];
        }
    }
    cout<<sm;
    cout<<max;
return 0;
}