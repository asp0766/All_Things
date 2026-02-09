// Kahn's Algorithm | Topological Sort ALgorithm | BFS : -



#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> kahnTopologicalSort(int nodes, vector<vector<int>>& adj) {
    vector<int> inDegree(nodes, 0);  // Array to store in-degree of nodes
    vector<int> topoSort;  // Store topological order
    queue<int> q;  // Queue to store nodes with in-degree 0

    // Step 1: Calculate in-degree for each node
    for (int i = 0; i < nodes; i++) {
        for (int neighbor : adj[i]) {
            inDegree[neighbor]++;
        }
    }

    // Step 2: Enqueue all nodes with in-degree 0
    for (int i = 0; i < nodes; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    // Step 3: Process nodes in the queue
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topoSort.push_back(node);

        // Decrease in-degree of neighbors and add to queue if in-degree becomes 0
        for (int neighbor : adj[node]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // Step 4: If the topological sort contains all nodes, return the result
    if (topoSort.size() == nodes) {
        return topoSort;
    } else {
        return {};  // Cycle detected, no valid topological sort
    }
}

int main() {
    int nodes = 6;
    vector<vector<int>> adj(nodes);

    // Directed edges in the graph
    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    vector<int> topoOrder = kahnTopologicalSort(nodes, adj);

    if (topoOrder.empty()) {
        cout << "Cycle Detected! No Topological Sort possible." << endl;
    } else {
        cout << "Topological Sort Order: ";
        for (int node : topoOrder) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
