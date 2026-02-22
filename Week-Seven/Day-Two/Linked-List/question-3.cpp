// 3. Insertion at the End
// Write a function to insert a new node with a given value at the end of a singly linked list. Print the updated list after insertion.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        return newNode;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    int arr[] = {10, 20, 30};
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
    cout << "Enter value to insert at end: ";
    cin >> value;

    head = insertAtEnd(head, value);

    cout << "Updated List: ";
    printList(head);

    return 0;
}