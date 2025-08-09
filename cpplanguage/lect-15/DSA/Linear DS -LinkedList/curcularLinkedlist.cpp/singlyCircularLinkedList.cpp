#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};

    if (!head) {
        head = newNode;
        newNode->next = head; // point to itself
        return;
    }

    Node* temp = head;
    while (temp->next != head) { // stop before head
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head; // make it circular
}

void printList(Node* head) {
    if (!head) return;

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)\n";
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    printList(head);

    return 0;
}
