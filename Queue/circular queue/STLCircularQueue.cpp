#include <iostream>
using namespace std;

class MyCircularQueue {
private:
    int *queue;
    int head, tail, capacity, count;

public:
    MyCircularQueue(int k) {
        capacity = k;
        queue = new int[capacity];
        head = -1;
        tail = -1;
        count = 0;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            head = 0;
        }
        tail = (tail + 1) % capacity;
        queue[tail] = value;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        if (head == tail) {  // Only one element left
            head = -1;
            tail = -1;
        } else {
            head = (head + 1) % capacity;
        }
        count--;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return queue[head];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return queue[tail];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }

    ~MyCircularQueue() {
        delete[] queue;
    }
};

int main() {
    MyCircularQueue circularQueue(5);  // Set the size of the circular queue to 5
    cout << circularQueue.enQueue(10) << endl;  // Returns true
    cout << circularQueue.enQueue(20) << endl;  // Returns true
    cout << circularQueue.enQueue(30) << endl;  // Returns true
    cout << circularQueue.enQueue(40) << endl;  // Returns true
    cout << circularQueue.Rear() << endl;       // Returns 40
    cout << circularQueue.isFull() << endl;     // Returns false
    cout << circularQueue.deQueue() << endl;    // Returns true
    cout << circularQueue.Front() << endl;      // Returns 20
    cout << circularQueue.enQueue(50) << endl;  // Returns true
    cout << circularQueue.enQueue(60) << endl;  // Returns true
    cout << circularQueue.enQueue(70) << endl;  // Returns false, queue is full
    cout << circularQueue.Rear() << endl;       // Returns 60
}
