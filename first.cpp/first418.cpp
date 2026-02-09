// Largest SubArray With Zero Sum : -


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxLen(vector<int>& nums) {
        unordered_map<int, int> prefixSumIndex;
        int sum = 0, maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum == 0)
                maxLen = i + 1;
            else if (prefixSumIndex.count(sum))
                maxLen = max(maxLen, i - prefixSumIndex[sum]);
            else
                prefixSumIndex[sum] = i;
        }
        return maxLen;
    }
};

int main() {
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10, 23};

    Solution sol;
    int result = sol.maxLen(nums);

    cout << "Length of Largest Subarray with Zero Sum: " << result << endl;

    return 0;
}
