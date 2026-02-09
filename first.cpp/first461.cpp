// Articulation Point in Graph : -



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ArticulationPoints {
public:
    vector<int> in_time, low_time, parent;
    vector<bool> visited, isArticulation;
    int time;

    ArticulationPoints(int n) {
        in_time.resize(n, -1);
        low_time.resize(n, -1);
        parent.resize(n, -1);
        visited.resize(n, false);
        isArticulation.resize(n, false);
        time = 0;
    }

    void dfs(int u, vector<vector<int>>& adj) {
        visited[u] = true;
        in_time[u] = low_time[u] = time++;

        int children = 0;

        for (int v : adj[u]) {
            if (!visited[v]) {
                parent[v] = u;
                dfs(v, adj);
                low_time[u] = min(low_time[u], low_time[v]);

                // If u is the root and has two or more children, u is an articulation point
                if (parent[u] == -1 && ++children > 1) {
                    isArticulation[u] = true;
                }
                // If u is not the root and low_time[v] >= in_time[u], u is an articulation point
                if (parent[u] != -1 && low_time[v] >= in_time[u]) {
                    isArticulation[u] = true;
                }
            } else if (v != parent[u]) {
                low_time[u] = min(low_time[u], in_time[v]); // Update low_time for back edge
            }
        }
    }

    void findArticulationPoints(int n, vector<vector<int>>& adj) {
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, adj);
            }
        }

        cout << "Articulation Points in the graph:" << endl;
        for (int i = 0; i < n; i++) {
            if (isArticulation[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
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

    ArticulationPoints ap(V);
    ap.findArticulationPoints(V, adj);

    return 0;
}
