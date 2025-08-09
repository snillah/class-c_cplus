1. What is a Graph?
A graph is a data structure that represents a set of nodes (called vertices) and the connections between them (called edges).


Graph Terms:

Vertex (node) → a point in the graph (e.g., A, B, C).

Edge → a connection between two vertices (e.g., A—B).

Weighted edge → edge has a cost/weight (e.g., distance 5 km).

Directed graph (digraph) → edges have a direction (A → B).

Undirected graph → edges have no direction (A — B).

Cycle → a path where you can return to the same vertex.

Connected graph → every vertex is reachable from any other.

Adjacency → two vertices are connected directly by an edge.

2. How to Represent a Graph
We usually represent graphs in two main ways in C++:

A. Adjacency Matrix
2D array where matrix[i][j] = 1 if there’s an edge from vertex i to vertex j.

Good for dense graphs (lots of edges).
Ex:
   A B C
A [0 1 1]
B [1 0 1]
C [1 1 0]

B. Adjacency List
An array/vector of lists.

Each index represents a vertex, and the list contains its neighbors.

Good for sparse graphs (few edges).
A: B, C
B: A, C
C: A, B

# Graph Concept
A graph is a data structure made up of vertices (nodes) and edges (connections).
# Example
Vertices (V) → Points in the graph (e.g., cities, computers, people).

Edges (E) → Connections between vertices (e.g., roads, cables, friendships).

Graphs can be:

# Undirected → edges have no direction (A connected to B means B connected to A).

# Directed → edges have a direction (A → B does not imply B → A).

Weighted → edges have a cost/weight (e.g., distance, time).

Unweighted → all edges are equal.

# Here, the code creates an undirected, unweighted graph using an Adjacency List:

Adjacency List → each vertex stores a list of vertices it’s connected to.

# Program Explain:
1. Class Graph
```cpp
class Graph {
    int V;  
    vector<vector<int>> adj; 
};
```
V → number of vertices.

adj → a vector of vectors, where each index stores the connected vertices.

2. Constructor
```cpp
Graph(int V) {
    this->V = V;
    adj.resize(V);
}
```
Initializes the graph with V vertices.

adj.resize(V) → makes adj have V empty lists (one for each vertex).

3. Adding Edges
```cpp
void addEdge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u); // remove this line for directed graph
}
Adds an edge between u and v.

Because it’s undirected, it adds both u → v and v → u.
0 -> 1
1 -> 0

```
4. Prinitng Graph
```cpp
void printGraph() {
    for (int i = 0; i < V; i++) {
        cout << i << " -> ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

```
Loops over all vertices.

Prints each vertex and its list of connected vertices.

Main Function
Graph g(5);
Creates a graph with vertices 0, 1, 2, 3, 4.


  0
 / \
1---4
|\ /|
| 3 |
 \|/
  2
Vertices: 5 (0–4)

Edges: Bi-directional connections stored in adjacency lists.

Purpose: Efficient for sparse graphs (fewer edges than V²).

---------------------***------------------------------------
3. What We Can Do with Graphs
Traversal: DFS (Depth-First Search) & BFS (Breadth-First Search).

Shortest path: Dijkstra’s, Bellman-Ford.

Minimum spanning tree: Kruskal’s, Prim’s.

Cycle detection.

Topological sorting (for DAGs).