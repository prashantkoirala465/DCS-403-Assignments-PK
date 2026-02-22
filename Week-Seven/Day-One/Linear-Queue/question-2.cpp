// 2. Enqueue Operation
// Write a function to insert an element at the rear end of the linear queue. Display the updated queue.

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

    bool isFull() {
        return (rear == MAX - 1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
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
        cout << "Current rear index: " << rear << endl;

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

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    return 0;
}
