// Connected Components : Using DFS with Adjacency List : -


#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5;
vector<int> adj[N];
bool visited[N];

void dfs(int node) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

int main() {
    int nodes = 6, edges = 4;
    vector<pair<int, int>> edgesList = {{0, 1}, {1, 2}, {3, 4}, {4, 5}};

    for (auto [u, v] : edgesList) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int components = 0;
    for (int i = 0; i < nodes; i++) {
        if (!visited[i]) {
            dfs(i);
            components++;
        }
    }

    cout << "Number of connected components: " << components << endl;
    return 0;
}
