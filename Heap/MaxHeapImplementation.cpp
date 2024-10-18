#include <iostream>
using namespace std;

class maxHeap
{
public:
    int arr[50];
    int idx;
    
    // Constructor
    maxHeap()
    {
        idx = 1; // Start index at 1
    }
    
    // Return the maximum element (root of heap)
    int top()
    {
        return arr[1]; // Root of max-heap
    }
    
    // Insert a new element into the heap
    void push(int x)
    {
        arr[idx] = x;
        int i = idx;
        idx++; // Increase the heap size
        
        // Heapify up
        while (i != 1)
        {
            if (arr[i / 2] < arr[i])  // If parent is smaller than child
            {
                swap(arr[i / 2], arr[i]);
                i = i / 2;
            }
            else
                break;
        }
    }
    
    // Remove the maximum element (root) from the heap
    void pop()
    {
        idx--; // Reduce the heap size
        arr[1] = arr[idx];  // Move last element to root
        int i = 1;
        
        // Heapify down
        while (true)
        {
            int left = 2 * i, right = 2 * i + 1;
            
            if (left >= idx) // No left child, break the loop
                break;
                
            int largest = i;
            
            if (arr[left] > arr[largest])
                largest = left;
                
            if (right < idx && arr[right] > arr[largest])
                largest = right;
            
            if (largest != i)
            {
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else
                break;
        }
    }
    
    // Return the size of the heap
    int size()
    {
        return idx - 1;
    }
    
    // Display the elements in the heap
    void display()
    {
        for (int i = 1; i <= idx - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    maxHeap pq;
    
    pq.push(10);
    pq.push(20);
    
    cout << "Size of heap: " << pq.size() << endl;
    
    pq.push(11);
    pq.push(4);
    
    cout << "Max element (top): " << pq.top() << endl;
    
    pq.pop();  // Remove the max element
    
    cout << "Heap after pop operation: ";
    pq.display();

    return 0;
}
