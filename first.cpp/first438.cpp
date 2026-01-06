// Depth-First Search (DFS) in Graph : -


#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5;
vector<int> adj[N];
bool visited[N];

void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

int main() {
    int nodes = 5;
    vector<pair<int, int>> edges = {{0,1},{0,2},{1,3},{1,4}};

    // Build the graph
    for (auto [u, v] : edges) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "DFS Traversal: ";
    dfs(0);  // start DFS from node 0

    return 0;
}
