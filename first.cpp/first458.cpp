// Kruskal's Algorithm - Minimum Spanning Tree : - 



#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class DisjointSet {
public:
    vector<int> parent, rank;

    // Constructor to initialize the Disjoint Set
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;  // Initially, each node is its own parent
        }
    }

    // Find operation with Path Compression
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    // Union operation with Union by Rank
    void unionByRank(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

// Edge structure to represent an edge (u, v) with weight
struct Edge {
    int u, v, weight;
    
    // Comparator for sorting edges based on their weights
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

class KruskalMST {
public:
    // Function to perform Kruskal's Algorithm
    void kruskal(int n, vector<Edge>& edges) {
        DisjointSet ds(n);
        vector<Edge> mst;

        // Sort edges based on their weights
        sort(edges.begin(), edges.end());

        int mstWeight = 0;

        // Iterate over all sorted edges
        for (const auto& edge : edges) {
            int rootU = ds.find(edge.u);
            int rootV = ds.find(edge.v);

            // If including this edge does not form a cycle, add it to MST
            if (rootU != rootV) {
                ds.unionByRank(edge.u, edge.v);
                mst.push_back(edge);
                mstWeight += edge.weight;
            }
        }

        // Output the MST edges and their total weight
        cout << "Edges in MST:" << endl;
        for (const auto& edge : mst) {
            cout << edge.u << " - " << edge.v << " : " << edge.weight << endl;
        }
        cout << "Total weight of MST: " << mstWeight << endl;
    }
};

int main() {
    int n = 6; // Number of vertices
    int m = 9; // Number of edges

    // List of edges in the graph (u, v, weight)
    vector<Edge> edges = {
        {0, 1, 4}, {0, 2, 4},
        {1, 2, 2}, {1, 3, 5},
        {2, 3, 3}, {2, 5, 6},
        {3, 4, 7}, {4, 5, 7},
        {5, 3, 3}
    };

    KruskalMST kruskal;
    kruskal.kruskal(n, edges);

    return 0;
}
