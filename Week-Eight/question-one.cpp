// Write a C++ function that searches for a key in a BST using recursion. The function should return a pointer to the node if found, or `nullptr` if not found.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == nullptr)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

Node* search(Node* root, int key) {
    if (root == nullptr)
        return nullptr;

    if (root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    Node* result = search(root, key);

    if (result != nullptr)
        cout << "Value found in BST." << endl;
    else
        cout << "Value not found in BST." << endl;

    return 0;
}
