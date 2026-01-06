// DP 36: Buy and Sell Stock II : -


#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int n = prices.size(), ans = 0;
    for(int i=1;i<n;i++){
        if(prices[i] > prices[i-1]) ans += prices[i] - prices[i-1];
    }
    return ans;
}

int main(){
    vector<int> p={7,1,5,3,6,4};
    cout << maxProfit(p) << "\n"; // 7 (buy 1->sell 5, buy 3->sell 6)
}
