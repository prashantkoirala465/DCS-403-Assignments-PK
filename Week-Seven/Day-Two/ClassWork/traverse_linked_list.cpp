// Example: Traversing (iterating) a linked list 

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printList(Node* head) {
    cout << "Traversing the list: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Setup a list
    Node* head = new Node{5, nullptr};
    head->next = new Node{10, nullptr};
    head->next->next = new Node{15, nullptr};

    printList(head);

    // Cleanup
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}