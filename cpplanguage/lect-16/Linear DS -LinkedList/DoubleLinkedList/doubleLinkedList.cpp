#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    
    temp->next = newNode;
    newNode->prev = temp;
}

void printForward(Node* head) {
    while (head) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

void freeList(Node*& head) {
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        delete temp; // free each node
    }
}


int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    printForward(head);
    freeList(head);
    return 0;
}
