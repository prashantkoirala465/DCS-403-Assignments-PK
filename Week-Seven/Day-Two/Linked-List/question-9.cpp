// 9. Insert After a Given Value
// Given a value X and a value Y, insert a new node with value Y immediately after the first node with value X in the list. Print the updated list.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAfterValue(Node* head, int X, int Y) {
    Node* temp = head;

    while(temp != NULL && temp->data != X) {
        temp = temp->next;
    }

    if(temp == NULL) {
        cout << "Value " << X << " not found\n";
        return head;
    }

    Node* newNode = new Node;
    newNode->data = Y;
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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

    int X, Y;
    cout << "Enter value X to insert after: ";
    cin >> X;
    cout << "Enter value Y to insert: ";
    cin >> Y;

    head = insertAfterValue(head, X, Y);

    cout << "Updated List: ";
    printList(head);

    return 0;
}