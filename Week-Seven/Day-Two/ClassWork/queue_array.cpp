// array implementation of queue

// Program to implement queue using array.
#include <iostream>
#include <stdexcept>

using namespace std;

static const int maxSize = 5;

class Queue
{
private:
    int queueArray[maxSize];
    int front;
    int rear;

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(int data);
    int dequeue();
    int peek();
    void display();
    int size();
}; // End of class Queue

Queue::Queue()
{
    front = -1;
    rear = -1;
} // End of Queue()

bool Queue::isEmpty()
{
    return (front == -1 || front > rear);
} // End of isEmpty()

bool Queue::isFull()
{
    return (rear == maxSize - 1);
} // End of isFull()

void Queue::enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queueArray[rear] = data;
    }
} // End of enqueue()

int Queue::dequeue()
{
    if (isEmpty())
        throw runtime_error("Queue is empty");

    int retValue = queueArray[front];
    front++;

    return retValue;
} // End of dequeue()

int Queue::peek()
{
    if (isEmpty())
        throw runtime_error("Queue is empty");

    return queueArray[front];
} // End of peek()

int Queue::size()
{
    if (isEmpty())
        return 0;

    return (rear - front + 1);
} // End of size()

void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        for (int i = front; i <= rear; i++)
            cout << queueArray[i] << "\n";
    }
} // End of display()

int main()
{
    Queue q;

    try
    {
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);

        cout << "Queue Items : \n";
        q.display();

        cout << "Front Item : " << q.peek() << "\n";
        cout << "Total items : " << q.size() << "\n";
        cout << "Dequeued Item : " << q.dequeue() << "\n";

        cout << "Queue Items : \n";
        q.display();

        q.enqueue(5);

        cout << "Queue Items : \n";
        q.display();

        cout << "Dequeued Item : " << q.dequeue() << "\n";
        cout << "Dequeued Item : " << q.dequeue() << "\n";
        cout << "Dequeued Item : " << q.dequeue() << "\n";
        cout << "Dequeued Item : " << q.dequeue() << "\n";

        cout << "Queue Items : \n";
        q.display();
    }
    catch (const exception& e)
    {
        cout << e.what() << "\n";
    }

    return 0;
} // End of main()
