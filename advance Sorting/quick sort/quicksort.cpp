#include<iostream>
#include<string>
#include<vector>
using namespace std ;

int partition(int arr[], int si , int ei) {
    int pivotElement = arr[(si + ei)/2];
    //
    int count = 0;
    for(int i = si  ; i<=ei ; i++){
        if( i == (si + ei)/2) continue;
        if(arr[i]<pivotElement) count++;
    }
    int pi = count + si;
    swap(arr[(si + ei)/2] , arr[pi]);// swap with pivot element
    int i = si;
    int j = ei;
    while(i<pi && j>pi) {
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else  if (arr[i]>pivotElement && arr[j]<=pivotElement) {
            swap(arr[j] , arr[i]);
            i++ ;
            j-- ;
        }
    }
    return pi;


}

void quicksort(int arr[] , int si , int ei){
    if(si>=ei) return ;

    int pi = partition(arr , si ,ei);
    quicksort(arr , si , pi - 1);
    quicksort(arr , pi + 1,ei );
}

int  main () 
{
    int arr[] = { 5 ,1, 8,2, 7, 6, 3, 4 , 34};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr , 0, n-1);
     for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}