// 2. Searching an Element
// Given a singly linked list and a value X, write a function to search for X in the list. If found, print its position (1-based index), otherwise print that the element is not present.


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int search(Node* head, int X) {
    int position = 1;
    Node* temp = head;

    while(temp != NULL) {
        if(temp->data == X)
            return position;
        temp = temp->next;
        position++;
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    Node* head = NULL;
    Node* temp = NULL;
    Node* newNode = NULL;

    for(int i = 0; i < n; i++) {
        newNode = new Node;
        newNode->data = arr[i];
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    int X;
    cout << "Enter value to search: ";
    cin >> X;

    int result = search(head, X);

    if(result != -1)
        cout << "Element found at position: " << result << endl;
    else
        cout << "Element not present" << endl;

    return 0;
}