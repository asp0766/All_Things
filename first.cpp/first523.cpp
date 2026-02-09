// DP 57: Maximum Sum Rectangle in a 2D matrix  : -


#include <bits/stdc++.h>
using namespace std;

int kadane(const vector<int>& a){
    int best = INT_MIN, cur = 0;
    for(int x: a){
        cur = max(x, cur + x);
        best = max(best, cur);
    }
    return best;
}

int maxSumRectangle(vector<vector<int>>& mat){
    int R = mat.size(), C = mat[0].size();
    int ans = INT_MIN;
    vector<int> temp(R, 0);
    for(int left = 0; left < C; ++left){
        fill(temp.begin(), temp.end(), 0);
        for(int right = left; right < C; ++right){
            for(int r = 0; r < R; ++r) temp[r] += mat[r][right];
            ans = max(ans, kadane(temp));
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> m = {
        { 1,  2, -1, -4, -20},
        {-8, -3,  4,  2,   1},
        { 3,  8, 10,  1,   3},
        {-4, -1,  1,  7,  -6}
    };
    cout << maxSumRectangle(m) << "\n"; // 29
}
