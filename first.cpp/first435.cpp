// Adjacency List : -


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nodes = 4;
    vector<int> adj[4];

    // Add edges
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(2);

    // Print adjacency list
    cout << "Adjacency List:\n";
    for(int i = 0; i < nodes; i++) {
        cout << i << ": ";
        for(int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
