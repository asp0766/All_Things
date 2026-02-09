// Rotten Orange : BFS Code : - 


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();
    queue<pair<int, int>> q;
    int time = 0, fresh = 0;

    // Initialize queue with all rotten oranges
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) q.push({i, j});
            else if (grid[i][j] == 1) fresh++;
        }
    }

    // Direction vectors for 4 neighbors
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while (!q.empty() && fresh > 0) {
        int sz = q.size();
        while (sz--) {
            auto [x, y] = q.front(); q.pop();
            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d], ny = y + dy[d];
                if (nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == 1) {
                    grid[nx][ny] = 2;
                    q.push({nx, ny});
                    fresh--;
                }
            }
        }
        time++;
    }

    return (fresh == 0) ? time : -1;
}

int main() {
    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };

    int result = orangesRotting(grid);
    cout << "Time to rot all oranges: " << result << endl;
    return 0;
}
