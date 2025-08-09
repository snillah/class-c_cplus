#include <iostream>
using namespace std;

class Graph {
    int V;             // Number of vertices
    int** adjMatrix;   // Pointer to adjacency matrix

public:
    Graph(int vertices) {
        V = vertices;
        adjMatrix = new int*[V];
        for (int i = 0; i < V; i++) {
            adjMatrix[i] = new int[V];
            for (int j = 0; j < V; j++)
                adjMatrix[i][j] = 0; // Initialize with 0 (no edge)
        }
    }

    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // Remove this for directed graph
    }

    void printMatrix() {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++)
                cout << adjMatrix[i][j] << " ";
            cout << endl;
        }
    }

    ~Graph() {
        for (int i = 0; i < V; i++)
            delete[] adjMatrix[i];
        delete[] adjMatrix;
    }
};

int main() {
    Graph g(4); // Graph with 4 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    cout << "Adjacency Matrix:" << endl;
    g.printMatrix();

    return 0;
}
