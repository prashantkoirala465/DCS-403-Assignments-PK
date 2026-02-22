//  1. Creation of Queue
// Implement a linear queue using an array. Support operations for enqueue (insert), dequeue (remove), and display the queue.


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
        cout << value << " inserted.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot remove.\n";
            return;
        }

        cout << arr[front] << " removed.\n";
        front++;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    LinearQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "\nTrying to insert 6, 7, 8...\n";

    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);

    cout << "\nRemoving 2 elements...\n";

    q.dequeue();
    q.dequeue();

    cout << "\nFinal Queue:\n";

    q.display();

    return 0;
}
