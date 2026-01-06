// Topological Sort Algorithm : DFS : - 



#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& topoSort) {
    visited[node] = true;

    // Visit all neighbors
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, topoSort);
        }
    }

    // Push node to stack after visiting all its neighbors
    topoSort.push(node);
}

vector<int> topologicalSort(int nodes, vector<vector<int>>& adj) {
    vector<bool> visited(nodes, false);
    stack<int> topoSort;

    // Perform DFS for all nodes
    for (int i = 0; i < nodes; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited, topoSort);
        }
    }

    // Convert the stack to a vector for returning the result
    vector<int> result;
    while (!topoSort.empty()) {
        result.push_back(topoSort.top());
        topoSort.pop();
    }

    return result;
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

    vector<int> topoOrder = topologicalSort(nodes, adj);

    cout << "Topological Sort Order: ";
    for (int node : topoOrder) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
