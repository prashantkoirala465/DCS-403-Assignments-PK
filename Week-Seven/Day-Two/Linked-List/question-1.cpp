// 1. Creation and Traversal
// Write a program to create a singly linked list from a given array of integers. Traverse the list and print all the elements.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

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

    temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
