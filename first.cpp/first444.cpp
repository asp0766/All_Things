// Bipartite Graph : DFS : -



#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<int>& color) {
    // Traverse all adjacent nodes
    for (int neighbor : adj[node]) {
        if (color[neighbor] == -1) {
            // Assign the opposite color to the neighbor
            color[neighbor] = 1 - color[node];
            if (!dfs(neighbor, adj, color)) {
                return false; // If we detect a conflict in colors
            }
        }
        else if (color[neighbor] == color[node]) {
            return false; // Found a conflict (same color for adjacent nodes)
        }
    }
    return true;
}

bool isBipartite(int nodes, vector<vector<int>>& adj) {
    vector<int> color(nodes, -1);  // -1 means no color assigned

    // Check all connected components
    for (int i = 0; i < nodes; i++) {
        if (color[i] == -1) {  // If the node is not yet colored
            color[i] = 0;  // Start with color 0
            if (!dfs(i, adj, color)) {
                return false;  // If any DFS call returns false, it's not bipartite
            }
        }
    }

    return true;  // All connected components are bipartite
}

int main() {
    int nodes = 5;
    vector<vector<int>> adj(nodes);

    // Example graph edges
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(3);
    adj[3].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[4].push_back(2);

    if (isBipartite(nodes, adj))
        cout << "The graph is Bipartite" << endl;
    else
        cout << "The graph is NOT Bipartite" << endl;

    return 0;
}
