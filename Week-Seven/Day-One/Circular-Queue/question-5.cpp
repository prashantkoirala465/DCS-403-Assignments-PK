// 5. Traversal/Display Circular Queue
// Write a function to print all elements present in the circular queue from front to rear.

#include <iostream>
using namespace std;

#define MAX 5

class CircularQueue {
private:
    int arr[MAX];
    int front;
    int rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((rear + 1) % MAX == front);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAX;
        }

        arr[rear] = value;
        cout << value << " inserted successfully.\n";
        cout << "Current front index: " << front << ", rear index: " << rear << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Nothing to remove.\n";
            return;
        }

        cout << arr[front] << " removed from queue.\n";

        if (front == rear) {  // Only one element
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }

        cout << "Current front index: " << front << ", rear index: " << rear << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element.\n";
            return;
        }

        cout << "Front element is: " << arr[front] << endl;
        cout << "Current front index: " << front << ", rear index: " << rear << endl;
    }

    // 🔹 Traversal / Display function
    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements from front to rear: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;      // Stop at rear
            i = (i + 1) % MAX;         // Wrap around
        }
        cout << endl;

        cout << "Current front index: " << front << ", rear index: " << rear << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50); // Queue full now

    cout << "\nDequeuing 2 elements:\n";
    q.dequeue();
    q.dequeue();

    cout << "\nEnqueue 60 and 70 (wrap-around):\n";
    q.enqueue(60);
    q.enqueue(70);

    cout << "\nDisplaying final queue:\n";
    q.displayQueue();

    return 0;
}
