// Shortest Path in Undirected Graph with Unit Weights : -



#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

vector<int> shortestPath(int n, vector<vector<int>>& edges, int source) {
    // Step 1: Build the adjacency list for the graph
    vector<vector<int>> adj(n);
    for (auto& edge : edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    // Step 2: Initialize distances and queue for BFS
    vector<int> dist(n, INT_MAX);  // Distance array, initialized to infinity
    dist[source] = 0;  // Distance from source to source is 0
    queue<int> q;
    q.push(source);

    // Step 3: BFS traversal
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (dist[neighbor] == INT_MAX) {  // If the neighbor is not visited
                dist[neighbor] = dist[node] + 1;  // Update the distance
                q.push(neighbor);  // Enqueue the neighbor
            }
        }
    }

    return dist;
}

int main() {
    int n = 6;  // Number of nodes
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}, {4, 5}};  // List of edges
    int source = 0;  // Starting node

    vector<int> dist = shortestPath(n, edges, source);

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
