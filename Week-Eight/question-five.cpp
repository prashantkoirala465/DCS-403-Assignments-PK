// (a) Write separate recursive functions to find the minimum and maximum node in a BST.  
// (b) Write separate iterative (non-recursive) functions to find the minimum and maximum node in a BST.
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

Node* insertIterative(Node* root, int value) {
    Node* newNode = createNode(value);
    if (root == nullptr)
        return newNode;

    Node* parent = nullptr;
    Node* current = root;

    while (current != nullptr) {
        parent = current;
        if (value < current->data)
            current = current->left;
        else if (value > current->data)
            current = current->right;
        else {
            delete newNode;
            return root; // ignore duplicates
        }
    }

    if (value < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

Node* findMinRecursive(Node* root) {
    if (root == nullptr) return nullptr;
    if (root->left == nullptr) return root;
    return findMinRecursive(root->left);
}

Node* findMaxRecursive(Node* root) {
    if (root == nullptr) return nullptr;
    if (root->right == nullptr) return root;
    return findMaxRecursive(root->right);
}

Node* findMinIterative(Node* root) {
    if (root == nullptr) return nullptr;
    while (root->left != nullptr)
        root = root->left;
    return root;
}

Node* findMaxIterative(Node* root) {
    if (root == nullptr) return nullptr;
    while (root->right != nullptr)
        root = root->right;
    return root;
}

int main() {
    Node* root = nullptr;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        root = insertIterative(root, value);
    }

    cout << "\nInorder Traversal: ";
    inorder(root);
    cout << endl;

    Node* minR = findMinRecursive(root);
    Node* maxR = findMaxRecursive(root);
    Node* minI = findMinIterative(root);
    Node* maxI = findMaxIterative(root);

    if(minR) cout << "Recursive Min: " << minR->data << endl;
    if(maxR) cout << "Recursive Max: " << maxR->data << endl;
    if(minI) cout << "Iterative Min: " << minI->data << endl;
    if(maxI) cout << "Iterative Max: " << maxI->data << endl;

    return 0;
}
