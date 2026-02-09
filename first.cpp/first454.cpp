// Bellman Ford Algorithm : -



#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Edge {
    int u, v, weight;  // u -> v with weight
};

// Bellman-Ford Algorithm
bool bellmanFord(int n, vector<Edge>& edges, int source, vector<int>& dist) {
    // Step 1: Initialize distances
    dist.assign(n, INT_MAX);
    dist[source] = 0;

    // Step 2: Relax edges (V - 1) times
    for (int i = 0; i < n - 1; i++) {
        for (auto& edge : edges) {
            if (dist[edge.u] != INT_MAX && dist[edge.u] + edge.weight < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.weight;
            }
        }
    }

    // Step 3: Check for negative weight cycles
    for (auto& edge : edges) {
        if (dist[edge.u] != INT_MAX && dist[edge.u] + edge.weight < dist[edge.v]) {
            return false;  // Negative cycle detected
        }
    }

    return true;  // No negative cycle
}

int main() {
    int n = 5;  // Number of vertices
    vector<Edge> edges = {
        {0, 1, -1}, {0, 2, 4},
        {1, 2, 3}, {1, 3, 2}, {1, 4, 2},
        {2, 3, 5}, {3, 4, -3}
    };  // Edges: (u, v, weight)
    int source = 0;  // Source node

    vector<int> dist(n);
    bool result = bellmanFord(n, edges, source, dist);

    if (result) {
        cout << "Shortest distances from node " << source << " are:" << endl;
        for (int i = 0; i < dist.size(); i++) {
            if (dist[i] == INT_MAX) {
                cout << "Node " << i << " is unreachable." << endl;
            } else {
                cout << "Node " << i << ": " << dist[i] << endl;
            }
        }
    } else {
        cout << "Graph contains a negative weight cycle!" << endl;
    }

    return 0;
}
