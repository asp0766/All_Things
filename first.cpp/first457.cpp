// Disjoint Set | Union by Rank | Union By Size | Path Compression : -



#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
private:
    vector<int> parent, rank, size;

public:
    // Constructor
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        size.resize(n, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i; // Initially, each node is its own parent
        }
    }

    // Find with Path Compression
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path Compression
        }
        return parent[x];
    }

    // Union by Rank
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

    // Union by Size
    void unionBySize(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (size[rootX] > size[rootY]) {
                parent[rootY] = rootX;
                size[rootX] += size[rootY];
            } else {
                parent[rootX] = rootY;
                size[rootY] += size[rootX];
            }
        }
    }

    // Check if two elements are in the same set
    bool areConnected(int x, int y) {
        return find(x) == find(y);
    }
};

int main() {
    int n = 6;  // Number of elements
    DisjointSet ds(n);

    ds.unionByRank(0, 1);
    ds.unionByRank(1, 2);
    ds.unionByRank(3, 4);

    cout << "Are 0 and 2 connected? " << (ds.areConnected(0, 2) ? "Yes" : "No") << endl;
    cout << "Are 0 and 3 connected? " << (ds.areConnected(0, 3) ? "Yes" : "No") << endl;

    ds.unionBySize(2, 3);

    cout << "Are 0 and 3 connected after union? " << (ds.areConnected(0, 3) ? "Yes" : "No") << endl;

    return 0;
}
