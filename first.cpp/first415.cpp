// Take U Forward Hashing Playlist ( 12 Videos ) : -
// https://youtube.com/playlist?list=PLgUwDviBIf0rVwua0kKYlsS_ik_1lyVK_&si=TelT0lg0K35X6xGr

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];
            if (mp.count(rem)) {
                return {mp[rem], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two numbers found." << endl;
    }

    return 0;
}
