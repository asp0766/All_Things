// Detect Cycle In A Directed Graph Using DFS : -



#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited, vector<int>& inStack) {
    visited[node] = 1;        // Mark the node as visited
    inStack[node] = 1;        // Mark the node as being in the current recursion stack

    // Visit all the neighbors of the node
    for (int neighbor : adj[node]) {
        if (inStack[neighbor]) {
            return true;  // If the neighbor is in the recursion stack, a cycle is detected
        }
        if (!visited[neighbor] && dfs(neighbor, adj, visited, inStack)) {
            return true;  // Recurse if the neighbor is unvisited
        }
    }

    inStack[node] = 0;  // Remove the node from the recursion stack
    return false;
}

bool detectCycle(int nodes, vector<vector<int>>& adj) {
    vector<int> visited(nodes, 0);  // 0 = unvisited, 1 = visited
    vector<int> inStack(nodes, 0);  // 0 = not in recursion stack, 1 = in recursion stack

    // Run DFS for every node
    for (int i = 0; i < nodes; i++) {
        if (!visited[i] && dfs(i, adj, visited, inStack)) {
            return true;  // Cycle detected
        }
    }

    return false;  // No cycle detected
}

int main() {
    int nodes = 4;
    vector<vector<int>> adj(nodes);

    // Example directed graph with a cycle: 0 -> 1 -> 2 -> 3 -> 1
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(1);

    if (detectCycle(nodes, adj))
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle Detected" << endl;

    return 0;
}
