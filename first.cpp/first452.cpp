// Shortest Path in Directed Acyclic Graph - Topological Sort : -



#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

void topologicalSort(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& topoStack) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            topologicalSort(neighbor, adj, visited, topoStack);
        }
    }
    topoStack.push(node);
}

vector<int> shortestPathInDAG(int n, vector<vector<int>>& edges, int source) {
    // Step 1: Build the graph (adjacency list representation)
    vector<vector<int>> adj(n);
    for (auto& edge : edges) {
        adj[edge[0]].push_back(edge[1]);  // Directed edge from edge[0] to edge[1]
    }

    // Step 2: Topological sort of the graph
    stack<int> topoStack;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topologicalSort(i, adj, visited, topoStack);
        }
    }

    // Step 3: Initialize distances
    vector<int> dist(n, INT_MAX);  // Set all distances to infinity
    dist[source] = 0;  // Distance to source is 0

    // Step 4: Process vertices in topological order
    while (!topoStack.empty()) {
        int u = topoStack.top();
        topoStack.pop();

        if (dist[u] != INT_MAX) {  // Only process nodes that are reachable
            for (int v : adj[u]) {
                if (dist[v] > dist[u] + 1) {  // Relax the edge
                    dist[v] = dist[u] + 1;
                }
            }
        }
    }

    return dist;
}

int main() {
    int n = 6;  // Number of nodes
    vector<vector<int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}, {4, 5}
    };  // Directed edges in the graph
    int source = 0;  // Starting node

    vector<int> dist = shortestPathInDAG(n, edges, source);

    cout << "Shortest distances from node " << source << " are:" << endl;
    for (int i = 0; i < dist.size(); i++) {
        if (dist[i] == INT_MAX) {
            cout << "Node " << i << " is unreachable." << endl;
        } else {
            cout << "Node " << i << ": " << dist[i] << endl;
        }
    }

    return 0;
}
