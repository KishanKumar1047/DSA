#include <iostream>
#include <string>
#include <vector>

using namespace std ;

int main() {
    int arr[] = {1 ,2, 3, 4, 5, 6, 7 , 8 ,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // prefix sum
    for(int i = 1; i<n ; i++){
        arr[i] += arr[i-1];
    }
    // partition
    bool check = false ;
    int idx ;
    for(int i = 1; i<n ; i++){
       if(2*arr[i]==arr[n-1]){
        idx = i;
        check = true;
        break;
       }
    }

    if(check==true){
        cout<<"Yes , it can be partitioned at index "<<idx<<endl;
    }
    else {
        cout<<"Partition not possible !"<<endl;
    }

    return 0;
}