// DP 56: Count Square Submatrices : -


#include <bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>>& a){
    int r=a.size(), c=a[0].size();
    int ans=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==1 && i>0 && j>0){
                a[i][j] = 1 + min({a[i-1][j], a[i][j-1], a[i-1][j-1]});
            }
            ans += a[i][j];
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> m={{0,1,1,1},{1,1,1,1},{0,1,1,1}};
    cout << countSquares(m) << "\n"; // 15
}
