// DP 58: Minimum Path Sum : - 


#include <bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>>& g){
    int r=g.size(), c=g[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 && j==0) continue;
            int up = (i>0? g[i-1][j] : INT_MAX/4);
            int left = (j>0? g[i][j-1] : INT_MAX/4);
            g[i][j] += min(up, left);
        }
    }
    return g[r-1][c-1];
}

int main(){
    vector<vector<int>> grid={{1,3,1},{1,5,1},{4,2,1}};
    cout << minPathSum(grid) << "\n"; // 7
}
