// Kosaraju's Algorithm - Strongly Connected Components : -



#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class KosarajuSCC {
public:
    void dfs1(int v, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& finishStack) {
        visited[v] = true;
        
        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                dfs1(neighbor, adj, visited, finishStack);
            }
        }
        
        // Push the vertex to the stack after all its neighbors are visited
        finishStack.push(v);
    }

    void dfs2(int v, vector<vector<int>>& reverseAdj, vector<bool>& visited) {
        visited[v] = true;
        cout << v << " ";
        
        for (int neighbor : reverseAdj[v]) {
            if (!visited[neighbor]) {
                dfs2(neighbor, reverseAdj, visited);
            }
        }
    }

    void kosaraju(int V, vector<vector<int>>& adj) {
        stack<int> finishStack;
        vector<bool> visited(V, false);

        // Step 1: Perform DFS on the original graph and store vertices in finish stack
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs1(i, adj, visited, finishStack);
            }
        }

        // Step 2: Reverse the graph
        vector<vector<int>> reverseAdj(V);
        for (int u = 0; u < V; u++) {
            for (int v : adj[u]) {
                reverseAdj[v].push_back(u);  // Reverse the edge u -> v to v -> u
            }
        }

        // Step 3: Perform DFS on the reversed graph using the finish stack order
        fill(visited.begin(), visited.end(), false);

        cout << "Strongly Connected Components:" << endl;
        while (!finishStack.empty()) {
            int v = finishStack.top();
            finishStack.pop();

            // If not visited, perform DFS on the reversed graph
            if (!visited[v]) {
                dfs2(v, reverseAdj, visited);
                cout << endl; // Each SCC is printed in a new line
            }
        }
    }
};

int main() {
    int V = 5;  // Number of vertices
    vector<vector<int>> adj(V);

    // Directed graph edges (example graph)
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[2].push_back(1);
    adj[0].push_back(3);
    adj[3].push_back(4);

    KosarajuSCC kosaraju;
    kosaraju.kosaraju(V, adj);

    return 0;
}
