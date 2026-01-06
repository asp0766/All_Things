// Striver Graph Series ( 30 Videos Playlist ) : -


// Graph Representation : -
// Adjacency Matrix : -


#include <iostream>
using namespace std;

int main() {
    int nodes = 4;
    int adj[4][4] = {0};

    // Add edges
    adj[0][1] = 1;
    adj[1][0] = 1;
    adj[1][2] = 1;
    adj[2][1] = 1;
    adj[2][3] = 1;
    adj[3][2] = 1;

    // Print adjacency matrix
    cout << "Adjacency Matrix:\n";
    for(int i = 0; i < nodes; i++) {
        for(int j = 0; j < nodes; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
