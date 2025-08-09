1. What is a Tree in Data Structure?
A tree is a non-linear hierarchical data structure made of nodes connected by edges.
It’s called a tree because it looks like an upside-down real-life tree 🌳:

Root at the top

Branches going down

Leaves at the bottom

2. Basic Terminology

| Term        | Meaning                                          |
| ----------- | ------------------------------------------------ |
| **Node**    | The basic unit (stores data + links to children) |
| **Root**    | The very first/top node                          |
| **Parent**  | A node that has children                         |
| **Child**   | A node connected under a parent                  |
| **Leaf**    | Node with no children                            |
| **Edge**    | The link between two nodes                       |
| **Depth**   | Distance from the root to that node              |
| **Height**  | Distance from a node to its deepest leaf         |
| **Subtree** | A tree inside another tree                       |

3. Example Tree

        10         <- Root
       /  \
     5     20      <- Children of 10
    / \   /  \
   3   7 15  25    <- Leaves

4. Types of Trees

General Tree – any number of children.

Binary Tree – each node has at most 2 children.

Binary Search Tree (BST) – binary tree with sorted property:

Left child < Parent < Right child

AVL Tree – self-balancing BST.

Heap – used for priority queues (Max Heap, Min Heap).

B-Tree / B+ Tree – used in databases and file systems.

Trie – used for fast word searching (like autocomplete).


AVL Tree ->
AVL Tree – self-balancing BST.
An AVL tree, named after its inventors G.M. Adelson-Velsky and E.M. Landis, is a self-balancing binary search tree (BST). 
Key characteristics
Self-Balancing: AVL trees automatically adjust their structure to maintain balance after insertion or deletion operations.
Height-Balanced Property: The height difference (balance factor) between the left and right subtrees of any node in an AVL tree is always -1, 0, or +1.
Binary Search Tree Properties: AVL trees maintain the core BST property: values in the left subtree are less than the parent node, and values in the right subtree are greater.
Rotations: To restore balance when the tree becomes unbalanced (due to insertions or deletions), AVL trees perform rotations. There are four types of rotations: left, right, left-right, and right-left rotations. 

Advantages
Faster Lookups: Due to the strict balance maintained, AVL trees provide faster search operations compared to unbalanced BSTs.
Guaranteed Balance: The self-balancing property ensures optimal performance, guaranteeing O(log n) time complexity for search, insertion, and deletion operations.
Predictable Performance: Consistent performance is a hallmark of AVL trees, making them suitable for real-time applications where quick response times are crucial. 

Disadvantages
Complexity: The implementation of AVL trees can be more complex than standard BSTs due to the necessity of handling rotations for balancing.
Overhead: Maintaining balance involves additional computations and potentially more memory usage for storing balance factors or heights.
Slower Insertions/Deletions: While operations are still O(log n), the balancing process involving rotations can be slower than in less strictly balanced trees like Red-Black trees, which require fewer rotations.

<!-- program explain -->
 Tree Traversals
Inorder (Left → Root → Right) — gives sorted order in BST.

Preorder (Root → Left → Right) — useful for copying tree.

Postorder (Left → Right → Root) — useful for deleting tree.

1.Structure

```cpp

struct Node {
    int data;
    Node* left;
    Node* right;
};

```
data → stores the actual value (like 10, 5, etc.).

left → pointer to the left child.

right → pointer to the right child.

This is for a binary tree, so only 2 children are allowed per node.

2.Creating a New Node
```cpp
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

```
new Node() → allocates memory for the node on the heap.

Initially, both left and right pointers are nullptr (no children yet).

Returns the address of the new node.

Building a Tree:
        10
       /  \
     5     20
    / \
   3   7

root points to node 10.

root->left = node 5, root->right = node 20.

Under node 5, left child = 3, right child = 7.



Inorder means:

Go to left child.

Visit current node.

Go to right child.

If we run inorder(root) on the above tree, the output is:
3 5 7 10 20
which is sorted order for a Binary Search Tree.


Why Trees?
Fast searching (in BST: O(log n) average).

Hierarchical data (e.g., file systems, org charts).

Dynamic size (unlike arrays, no fixed size).