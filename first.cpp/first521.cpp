// DP 55: Maximum Rectangle Area  : -


#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(const vector<int>& h){
    int n=h.size(), best=0;
    stack<int> st;
    for(int i=0;i<=n;i++){
        int cur = (i<n? h[i] : 0);
        while(!st.empty() && h[st.top()] > cur){
            int height = h[st.top()]; st.pop();
            int left = st.empty()? -1 : st.top();
            int width = i - left - 1;
            best = max(best, height * width);
        }
        st.push(i);
    }
    return best;
}

int maximalRectangle(vector<vector<int>>& mat){
    if(mat.empty() || mat[0].empty()) return 0;
    int r=mat.size(), c=mat[0].size(), ans=0;
    vector<int> height(c,0);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            height[j] = (mat[i][j]==1) ? height[j]+1 : 0;
        }
        ans = max(ans, largestRectangleArea(height));
    }
    return ans;
}

int main(){
    vector<vector<int>> a={{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    cout << maximalRectangle(a) << "\n"; // 8
}
