// DP 43: LIS via binary search computes the LIS : -


#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& a){
    vector<int> tails;
    for(int x: a){
        auto it = lower_bound(tails.begin(), tails.end(), x);
        if(it == tails.end()) tails.push_back(x);
        else *it = x;
    }
    return (int)tails.size();
}

int main(){
    vector<int> v={10,9,2,5,3,7,101,18};
    cout << lengthOfLIS(v) << "\n"; // 4
}
