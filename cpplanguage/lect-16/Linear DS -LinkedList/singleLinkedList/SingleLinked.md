# Structure of a Node (Singly Linked List)

```cpp

struct Node {
    int data;      // Value
    Node* next;    // Pointer to next node
};

```

Node is the basic building block of a linked list.

data → stores the value of the node (here an int).

next → pointer to the next Node in the list.

A Node* means a pointer to another Node.

So, visually:

css

[ data | next ]  →  [ data | next ]  →  ...
2️. printList Function

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Takes a pointer to the first node (head).

while (temp != nullptr) → loops until the end of the list.

temp->data prints the value stored in the current node.

temp = temp->next moves to the next node.

At the end, "NULL" is printed to indicate no more nodes.

Example Output:

10 -> 20 -> 30 -> NULL

3️. Main Function
Step 1 — Create Nodes

Node* head = new Node{10, nullptr};
Node* second = new Node{20, nullptr};
Node* third = new Node{30, nullptr};
new Node{10, nullptr} dynamically creates a Node in heap memory.

10 is stored in data, nullptr in next (meaning it’s not linked yet).

So we have:

head → [10 | nullptr]
second → [20 | nullptr]
third → [30 | nullptr]

Step 2 — Link Nodes

head->next = second;
second->next = third;
head->next = second; means:

The first node’s next now points to second.

second->next = third; means:

The second node’s next now points to third.

Now it looks like:

head → [10 | next] → [20 | next] → [30 | nullptr]
Step 3 — Print the List

printList(head);
Calls the function to traverse from head to the end.

Output:

10 -> 20 -> 30 -> NULL

Step 4 — Free Memory

delete head;
delete second;
delete third;
Since we used new, we must manually delete to avoid memory leaks.

This deallocates the heap memory.


Key Points for Singly Linked List:

Insert → O(1) for beginning, O(n) for middle/end.

Delete → O(1) for beginning, O(n) for middle/end.

Search → Always O(n) (because you must traverse).

