// 6. Deletion at a Given Position
// Write a function to delete the node at a given position (1-based index) from the singly linked list. Print the updated list after deletion.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* deleteAtPosition(Node* head, int position) {

    if(head == NULL) {
        cout << "List is empty\n";
        return head;
    }

    if(position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;
    Node* previous = NULL;
    int count = 1;

    while(current != NULL && count < position) {
        previous = current;
        current = current->next;
        count++;
    }

    if(current == NULL) {
        cout << "Invalid position\n";
        return head;
    }

    previous->next = current->next;
    delete current;

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
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    int position;
    cout << "Enter position to delete: ";
    cin >> position;

    head = deleteAtPosition(head, position);

    cout << "Updated List: ";
    printList(head);
    cout << endl;

    return 0;
}