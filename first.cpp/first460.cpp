// Bridges in Graph - Using Tarjan's Algorithm of time in and low time : -



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class TarjanBridges {
public:
    vector<int> in_time, low_time, parent;
    vector<bool> visited;
    vector<pair<int, int>> bridges;
    int time;

    TarjanBridges(int n) {
        in_time.resize(n, -1);
        low_time.resize(n, -1);
        parent.resize(n, -1);
        visited.resize(n, false);
        time = 0;
    }

    void dfs(int u, vector<vector<int>>& adj) {
        visited[u] = true;
        in_time[u] = low_time[u] = time++;

        // Explore each adjacent vertex
        for (int v : adj[u]) {
            if (!visited[v]) {
                parent[v] = u;
                dfs(v, adj);

                // After returning from DFS, check if low_time[v] is greater than in_time[u]
                low_time[u] = min(low_time[u], low_time[v]);

                // If low_time[v] is greater than in_time[u], u-v is a bridge
                if (low_time[v] > in_time[u]) {
                    bridges.push_back({u, v});
                }
            }
            // Update low_time[u] for back edge (u, v)
            else if (v != parent[u]) {
                low_time[u] = min(low_time[u], in_time[v]);
            }
        }
    }

    void findBridges(int n, vector<vector<int>>& adj) {
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, adj);
            }
        }

        // Output all bridges found
        cout << "Bridges in the graph:" << endl;
        for (auto& bridge : bridges) {
            cout << bridge.first << " - " << bridge.second << endl;
        }
    }
};

int main() {
    int V = 5;  // Number of vertices
    vector<vector<int>> adj(V);

    // Create the graph (undirected)
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(2);
    adj[2].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(3);

    TarjanBridges tarjan(V);
    tarjan.findBridges(V, adj);

    return 0;
}
