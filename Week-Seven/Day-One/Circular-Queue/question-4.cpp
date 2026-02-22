// 4. Peek/Front Element
// Write a function to return and print the front element of the circular queue.


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

        if (front == rear) { 
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

    void displayQueue() {
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

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "\nPeeking front element:\n";
    q.peek();

    cout << "\nDequeue one element:\n";
    q.dequeue();

    cout << "\nPeeking front element again:\n";
    q.peek();

    return 0;
}
