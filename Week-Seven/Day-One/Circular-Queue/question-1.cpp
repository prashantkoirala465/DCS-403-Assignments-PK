// 1. Creation of Circular Queue
// Implement a circular queue using an array. Support operations for enqueue, dequeue, and display the queue.

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

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if queue is full
    bool isFull() {
        return ((rear + 1) % MAX == front);
    }

    // Enqueue operation
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }

        // If queue is empty
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAX;  // Wrap around
        }

        arr[rear] = value;
        cout << value << " inserted successfully.\n";
        display();
    }

    // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Nothing to remove.\n";
            return;
        }

        cout << arr[front] << " removed from queue.\n";

        // Queue has only one element
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;  // Wrap around
        }

        display();
    }

    // Display queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements: ";

        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    // Insert elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50); // Queue full now

    cout << "\nTrying to insert 60:\n";
    q.enqueue(60); // Overflow

    cout << "\nDequeue 2 elements:\n";
    q.dequeue();
    q.dequeue();

    cout << "\nInsert 60 and 70 (should wrap around):\n";
    q.enqueue(60);
    q.enqueue(70);

    cout << "\nFinal queue:\n";
    q.display();

    return 0;
}
