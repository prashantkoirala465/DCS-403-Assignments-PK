// 5. Traversal/Display Queue
// Write a function to print all elements present in the linear queue from front to rear.

#include <iostream>
using namespace std;

#define MAX 5

class LinearQueue {
private:
    int arr[MAX];
    int front;
    int rear;

public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    bool isFull() {
        return (rear == MAX - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
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
        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
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

    // Traversal/Display function
    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements from front to rear: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Current front index: " << front << ", rear index: " << rear << endl;
    }
};

int main() {
    LinearQueue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << "\nDisplaying queue elements:\n";
    q.displayQueue();

    cout << "\nPeeking front element:\n";
    q.peek();

    cout << "\nDequeuing one element:\n";
    q.dequeue();

    cout << "\nDisplaying queue elements after dequeue:\n";
    q.displayQueue();

    return 0;
}
