// 4. Peek/Front Element
// Write a function to return and print the front element of the queue without removing it.
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
        display();
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
        display();
    }

    // Peek / Front operation
    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element.\n";
            return;
        }

        cout << "Front element is: " << arr[front] << endl;
        cout << "Current front index: " << front << ", rear index: " << rear << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Updated Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    LinearQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "\nPeeking front element:\n";
    q.peek();

    cout << "\nPerforming one dequeue operation:\n";
    q.dequeue();

    cout << "\nPeeking front element again:\n";
    q.peek();

    return 0;
}
