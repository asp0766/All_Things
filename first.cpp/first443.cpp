// Bipartite Graph : BFS : -



#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isBipartite(int nodes, vector<vector<int>>& adj) {
    vector<int> color(nodes, -1);  // -1 means no color assigned
    
    // BFS function to check for bipartite
    for (int start = 0; start < nodes; start++) {
        if (color[start] == -1) {  // Not visited yet
            queue<int> q;
            color[start] = 0;  // Assign first color (0)

            q.push(start);

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (int neighbor : adj[node]) {
                    if (color[neighbor] == -1) {
                        // Assign opposite color to the neighbor
                        color[neighbor] = 1 - color[node];
                        q.push(neighbor);
                    }
                    else if (color[neighbor] == color[node]) {
                        // Found two adjacent nodes with the same color
                        return false;  // Not bipartite
                    }
                }
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
