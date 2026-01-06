// Breadth-First Search (BFS) in Graph : -


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e5;
vector<int> adj[N];
bool visited[N];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    int nodes = 5;
    vector<pair<int, int>> edges = {{0,1},{0,2},{1,3},{1,4}};

    for (auto [u, v] : edges) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "BFS Traversal: ";
    bfs(0);
    return 0;
}
