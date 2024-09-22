// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std ;

// int partition(int arr[], int si , int ei) {
//     int pivotElement = arr[(si + ei)/2];
//     //
//     int count = 0;
//     for(int i = si  ; i<=ei ; i++){
//         if( i == (si + ei)/2) continue;
//         if(arr[i]<pivotElement) count++;
//     }
//     int pi = count + si;
//     swap(arr[(si + ei)/2] , arr[pi]);// swap with pivot element
//     int i = si;
//     int j = ei;
//     while(i<pi && j>pi) {
//         if(arr[i]<=pivotElement) i++;
//         if(arr[j]>pivotElement) j--;
//         else  if (arr[i]>pivotElement && arr[j]<=pivotElement) {
//             swap(arr[j] , arr[i]);
//             i++ ;
//             j-- ;
//         }
//     }
//     return pi;


// }

// void quicksort(int arr[] , int si , int ei){
//     if(si>=ei) return ;

//     int pi = partition(arr , si ,ei);
//     quicksort(arr , si , pi - 1);
//     quicksort(arr , pi + 1,ei );
// }

// int  main () 
// {
//     int arr[] = { 5 ,1, 8,2, 7, 6, 3, 4 , 34};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i<n ;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     quicksort(arr , 0, n-1);
//      for(int i = 0; i<n ;i++){
//         cout<<arr[i]<<" ";
//     }

// return 0;
// }

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function to find the pivot and partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1;       // Index of the smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;           // Increment index of the smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Place the pivot element in the correct position
    return i + 1;                // Return the index of the pivot
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // Find the pivot element
        quickSort(arr, low, pivotIndex - 1);        // Recursively sort the left part
        quickSort(arr, pivotIndex + 1, high);       // Recursively sort the right part
    }
}

// // Function to print an array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// Main function
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // cout << "Original array: ";
    // printArray(arr, n);

    quickSort(arr, 0, n - 1);

    // cout << "Sorted array: ";
    // printArray(arr, n);

    return 0;
}
