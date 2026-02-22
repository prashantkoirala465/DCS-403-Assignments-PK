// 6. Check Full/Empty Conditions
// Write functions to check if the circular queue is full or empty.


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

    void checkStatus() {
        if (isEmpty()) {
            cout << "Queue is EMPTY.\n";
        } else if (isFull()) {
            cout << "Queue is FULL.\n";
        } else {
            cout << "Queue is neither full nor empty.\n";
        }

        cout << "Current front index: " << front << ", rear index: " << rear << endl;
    }
};

int main() {
    CircularQueue q;

    cout << "Initial status:\n";
    q.checkStatus(); 

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "\nStatus after inserting 5 elements:\n";
    q.checkStatus(); 

    q.dequeue();
    q.dequeue();

    cout << "\nStatus after removing 2 elements:\n";
    q.checkStatus(); 

    q.enqueue(60);
    q.enqueue(70);

    cout << "\nFinal status:\n";
    q.checkStatus(); 

    return 0;
}
