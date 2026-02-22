// 5. Deletion of an Element by Value
// Given a value X, write a function to delete the first occurrence of X from the singly linked list. Print the updated list after deletion.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* deleteByValue(Node* head, int X) {

    if(head == NULL) {
        cout << "List is empty\n";
        return head;
    }

    if(head->data == X) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;
    Node* previous = NULL;

    while(current != NULL && current->data != X) {
        previous = current;
        current = current->next;
    }

    if(current == NULL) {
        cout << "Element not found\n";
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

    int X;
    cout << "Enter value to delete: ";
    cin >> X;

    head = deleteByValue(head, X);

    cout << "Updated List: ";
    printList(head);
    cout << endl;

    return 0;
}