// Count SubArrays With Xor As K : - 


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int countSubarraysWithXOR(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int count = 0, xr = 0;

        for (int num : nums) {
            xr ^= num;
            if (xr == k) count++;
            if (freq.count(xr ^ k)) count += freq[xr ^ k];
            freq[xr]++;
        }

        return count;
    }
};

int main() {
    vector<int> nums = {4, 2, 2, 6, 4};
    int k = 6;

    Solution sol;
    int result = sol.countSubarraysWithXOR(nums, k);

    cout << "Count of Subarrays with XOR = " << k << ": " << result << endl;

    return 0;
}
