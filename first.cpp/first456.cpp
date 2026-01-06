// Prim's Algorithm - Minimum Spanning Tree : -


#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

#define INF INT_MAX

// Structure to represent an edge
struct Edge {
    int u, v, weight;
    bool operator>(const Edge& other) const {
        return weight > other.weight; // For min-heap
    }
};

// Function to implement Prim's Algorithm
void primMST(int n, vector<vector<pair<int, int>>>& adj) {
    // Min-heap to select the edge with the smallest weight
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

    // To keep track of the vertices included in MST
    vector<bool> inMST(n, false);

    // Start from vertex 0
    inMST[0] = true;
    for (auto& edge : adj[0]) {
        pq.push({0, edge.first, edge.second}); // (u, v, weight)
    }

    int mstWeight = 0;
    vector<Edge> mstEdges;

    // While priority queue is not empty
    while (!pq.empty()) {
        Edge minEdge = pq.top();
        pq.pop();

        // Skip the edge if both vertices are already in the MST
        if (inMST[minEdge.v]) continue;

        // Add the edge to MST
        inMST[minEdge.v] = true;
        mstWeight += minEdge.weight;
        mstEdges.push_back(minEdge);

        // Add all adjacent edges of the newly included vertex to the priority queue
        for (auto& edge : adj[minEdge.v]) {
            if (!inMST[edge.first]) {
                pq.push({minEdge.v, edge.first, edge.second});
            }
        }
    }

    // Print the edges in MST
    cout << "Edges in MST:" << endl;
    for (auto& edge : mstEdges) {
        cout << edge.u << " - " << edge.v << " : " << edge.weight << endl;
    }
    cout << "Total weight of MST: " << mstWeight << endl;
}

int main() {
    int n = 5; // Number of vertices
    // Adjacency list representation of the graph
    vector<vector<pair<int, int>>> adj(n);
    adj[0].push_back({1, 2});
    adj[0].push_back({3, 6});
    adj[1].push_back({0, 2});
    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});
    adj[2].push_back({3, 1});
    adj[3].push_back({0, 6});
    adj[3].push_back({2, 1});
    adj[4].push_back({2, 5});

    primMST(n, adj);

    return 0;
}

