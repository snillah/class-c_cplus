# A Doubly Linked List (DLL) is like a singly linked list, but each node has two pointers:

# prev → Points to the previous node

# next → Points to the next node

This makes it easier to traverse backward and perform insert/delete in both directions without extra traversal.

Structure of a DLL Node:

```cpp

struct Node {
    int data;   // Holds the actual value
    Node* prev; // pointer to previous node
    Node* next; // pointer to next node
};

```

Operations in Doubly Linked List:

1️. Insertion
We can insert:

At the beginning

At the end

At a specific position

Example — Insert at beginning:


```cpp

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr, nullptr}; // Create a new node

    // If list is empty, newNode becomes the head
    if (!head) {
        head = newNode;
        return;
    }

    // Otherwise, traverse to the last node
    Node* temp = head;
    while (temp->next) 
    temp = temp->next;
    // Link new node at the end
    temp->next = newNode; 
     // Link last node's next to newNode
    newNode->prev = temp; 
     // Link newNode's prev to last node
}


```
Key points:

We pass Node*& head so we can modify the original head pointer (if the list is empty).

First, check if the list is empty. If yes → head = newNode.

If not empty, we move temp to the last node and attach the new node at the end.

Print List Forward

```cpp
void printForward(Node* head) {
    while (head) { // Traverse until NULL
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}
```
This function moves from head to tail using the next pointer, printing each node’s data.








2️. Deletion
We can delete:

From the beginning

From the end

Specific value



Example — Delete by value:

```cpp

void deleteByValue(Node*& head, int value) {
    Node* temp = head;
    while (temp && temp->data != value) {
        temp = temp->next;
    }
    if (!temp) return; // Value not found

    if (temp->prev) temp->prev->next = temp->next;
    else head = temp->next; // deleting head

    if (temp->next) temp->next->prev = temp->prev;

    delete temp;
}
```

