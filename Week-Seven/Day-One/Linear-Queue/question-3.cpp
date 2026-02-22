// 3. Dequeue Operation
// Write a function to delete an element from the front of the linear queue. Display the updated queue.

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

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "\nTrying to enqueue extra elements 6,7,8:\n";
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);

    cout << "\nDequeue 2 elements:\n";
    q.dequeue();
    q.dequeue();

    cout << "\nFinal Queue:\n";
    q.display();

    return 0;
}
