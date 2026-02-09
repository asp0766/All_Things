// DP 35: Best Time to Buy and Sell Stock (single transaction) : - 


#include <bits/stdc++.h>
using namespace std;

int maxProfit(const vector<int>& prices){
    if(prices.empty()) return 0;
    int mini = prices[0], ans = 0;
    for(int i=1;i<(int)prices.size();i++){
        ans = max(ans, prices[i] - mini);
        mini = min(mini, prices[i]);
    }
    return ans;
}

int main(){
    cout << maxProfit({7,1,5,3,6,4}) << "\n"; // 5
    cout << maxProfit({7,6,4,3,1}) << "\n";   // 0
}
