// 4. Insertion at the Beginning
// Write a function to insert a new node with a given value at the beginning of a singly linked list. Print the updated list after insertion.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    int arr[] = {20, 30, 40};
    int n = 3;

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
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;

    head = insertAtBeginning(head, value);

    cout << "Updated List: ";
    printList(head);

    return 0;
}