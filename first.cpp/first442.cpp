// Number Of Distinct Islands : DFS : - 



#include <iostream>
#include <vector>
#include <set>
using namespace std;

void dfs(int x, int y, vector<vector<int>>& grid, vector<pair<int, int>>& shape, int baseX, int baseY) {
    // Check bounds and if the cell is land (1)
    if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] != 1) {
        return;
    }
    
    // Mark the cell as visited
    grid[x][y] = 2;  // Change 1 to 2 to mark visited
    
    // Record the relative position of the cell
    shape.push_back({x - baseX, y - baseY});

    // Explore all 4 directions (up, down, left, right)
    dfs(x + 1, y, grid, shape, baseX, baseY);
    dfs(x - 1, y, grid, shape, baseX, baseY);
    dfs(x, y + 1, grid, shape, baseX, baseY);
    dfs(x, y - 1, grid, shape, baseX, baseY);
}

int numDistinctIslands(vector<vector<int>>& grid) {
    set<vector<pair<int, int>>> uniqueIslands;  // Set to store distinct island shapes

    // Traverse the grid
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {  // If land is found, it's a new island
                vector<pair<int, int>> shape;
                dfs(i, j, grid, shape, i, j);  // Collect the shape of the island
                uniqueIslands.insert(shape);  // Insert shape into the set (duplicates will be ignored)
            }
        }
    }

    return uniqueIslands.size();  // Return the number of distinct islands
}

int main() {
    vector<vector<int>> grid = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0}
    };

    cout << "Number of Distinct Islands: " << numDistinctIslands(grid) << endl;
    return 0;
}
