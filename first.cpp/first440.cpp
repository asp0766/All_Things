// Detect A Cycle In An Undirected graph Using BFS : -


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e5;
vector<int> adj[N];
bool visited[N];

bool isCycleBFS(int start) {
    queue<pair<int, int>> q; // {node, parent}
    visited[start] = true;
    q.push({start, -1});

    while (!q.empty()) {
        auto [node, parent] = q.front(); q.pop();

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, node});
            }
            else if (neighbor != parent) {
                return true; // cycle found
            }
        }
    }
    return false;
}

int main() {
    int nodes = 5;
    vector<pair<int, int>> edges = {{0,1},{1,2},{2,3},{3,4},{4,1}}; // contains cycle

    for (auto [u, v] : edges) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < nodes; i++) {
        if (!visited[i]) {
            if (isCycleBFS(i)) {
                cout << "Cycle Detected\n";
                return 0;
            }
        }
    }

    cout << "No Cycle\n";
    return 0;
}
