#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating nodes
    Node* head = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};

    // Linking nodes
    head->next = second;
    second->next = third;

    // Printing linked list
    printList(head);

    // Free memory
    delete head;
    delete second;
    delete third;

    return 0;
}
