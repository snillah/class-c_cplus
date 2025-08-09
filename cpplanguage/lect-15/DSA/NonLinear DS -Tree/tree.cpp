#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// In-order Traversal meaning -the act of passing or moving across, over, 
// or through something It can refer to physical movement, 
// like traveling across a landscape or through a building, or 
// it can refer to a systematic way of examining or processing elements in a data structure, like traversing a tree or graph. 
void inorder(Node* root) {
    if (root == nullptr) return; // Base case: no node
    inorder(root->left);         // Visit left subtree
    cout << root->data << " ";   // Visit root
    inorder(root->right);       // Visit right subtree
}

int main() {
    // Building the Tree
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);

    cout << "Inorder Traversal: ";
    inorder(root);
}
