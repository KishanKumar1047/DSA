#include <iostream>
#include <vector>
using namespace std;

// Function to perform binary search
int binarySearch(const vector<int>& arr, int item) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == item) {
            return mid; // Item found
        } else if (arr[mid] < item) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low; // Item not found, return insertion point
}

// Function to delete or insert item in the array
void insertAndDelete(vector<int>& arr, int item) {
    int index = binarySearch(arr, item);
    
    if (index < arr.size() && arr[index] == item) {
        // Item found, delete it
        arr.erase(arr.begin() + index);
        cout << "Item " << item << " found and deleted. New array: ";
    } else {
        // Item not found, insert it at the correct position
        arr.insert(arr.begin() + index, item);
        cout << "Item " << item << " not found and inserted. New array: ";
    }
    
    // Print the updated array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int itemToSearch = 6;
    
    insertAndDelete(arr, itemToSearch);

    return 0;
}
