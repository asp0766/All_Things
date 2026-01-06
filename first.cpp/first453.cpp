// Dijkstra's Algorithm - Using Priority Queue : -



#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int, int> pii;  // Pair to store (distance, vertex)

// Dijkstra's Algorithm to find shortest path
vector<int> dijkstra(int n, vector<vector<pii>>& adj, int source) {
    vector<int> dist(n, INT_MAX);  // Distance array, initialized to infinity
    priority_queue<pii, vector<pii>, greater<pii>> pq;  // Min-heap (priority queue)
    
    dist[source] = 0;  // Distance to source is 0
    pq.push({0, source});  // Push the source node into the priority queue
    
    while (!pq.empty()) {
        int u = pq.top().second;  // Get the node with the smallest distance
        int d = pq.top().first;   // Get the current distance of that node
        pq.pop();
        
        // If the current distance is greater than the already found shortest distance, skip processing
        if (d > dist[u]) continue;
        
        // Check all neighbors of node u
        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;   // Neighbor node
            int weight = neighbor.second;  // Weight of the edge (u, v)
            
            // If a shorter path is found
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});  // Push the neighbor with updated distance
            }
        }
    }
    
    return dist;
}

int main() {
    int n = 6;  // Number of nodes
    vector<vector<pii>> adj(n);  // Adjacency list representation of the graph
    
    // Add edges in the form of (destination, weight)
    adj[0].push_back({1, 7});
    adj[0].push_back({2, 9});
    adj[0].push_back({5, 14});
    adj[1].push_back({0, 7});
    adj[1].push_back({2, 10});
    adj[1].push_back({3, 15});
    adj[2].push_back({0, 9});
    adj[2].push_back({1, 10});
    adj[2].push_back({3, 11});
    adj[2].push_back({5, 2});
    adj[3].push_back({1, 15});
    adj[3].push_back({2, 11});
    adj[3].push_back({4, 6});
    adj[4].push_back({3, 6});
    adj[4].push_back({5, 9});
    adj[5].push_back({0, 14});
    adj[5].push_back({2, 2});
    adj[5].push_back({4, 9});
    
    int source = 0;  // Starting node

    vector<int> dist = dijkstra(n, adj, source);

    cout << "Shortest distances from node " << source << " are:" << endl;
    for (int i = 0; i < dist.size(); i++) {
        if (dist[i] == INT_MAX) {
            cout << "Node " << i << " is unreachable." << endl;
        } else {
            cout << "Node " << i << ": " << dist[i] << endl;
        }
    }

    return 0;
}
