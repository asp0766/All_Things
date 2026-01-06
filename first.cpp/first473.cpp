// DP 7: Ninja’s Training introduces 2D DP : -


#include <bits/stdc++.h>
using namespace std;

int f(int day, int last, const vector<vector<int>>& p, vector<vector<int>>& dp){
    if(dp[day][last] != -1) return dp[day][last];
    if(day == 0){
        int best = 0;
        for(int a=0;a<3;a++) if(a != last) best = max(best, p[0][a]);
        return dp[0][last] = best;
    }
    int best = 0;
    for(int a=0;a<3;a++){
        if(a == last) continue;
        best = max(best, p[day][a] + f(day-1, a, p, dp));
    }
    return dp[day][last] = best;
}

int ninjaTraining(int n, const vector<vector<int>>& p){
    vector<vector<int>> dp(n, vector<int>(4, -1));
    return f(n-1, 3, p, dp); // last=3 means no previous activity
}

int main(){
    vector<vector<int>> p = {{10,40,70},{20,50,80},{30,60,90}};
    cout << ninjaTraining(p.size(), p) << "\n"; // 210
}
