//  10. Print Elements in Reverse Order (without modifying the list)
// Write a function to print the elements of the singly linked list in reverse order using recursion (do not reverse the actual list).


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printReverse(Node* head) {
    if(head == NULL)
        return;

    printReverse(head->next);
    cout << head->data << " ";
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

    cout << "Original List: ";
    printList(head);

    cout << "Reversed Order (without modifying list): ";
    printReverse(head);
    cout << endl;

    return 0;
}