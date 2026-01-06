// Longest SubString Without Repeating Charactres : -


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.length(); right++) {
            if (lastIndex.count(s[right]) && lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }
            lastIndex[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main() {
    string s = "abcabcbb";

    Solution sol;
    int result = sol.lengthOfLongestSubstring(s);

    cout << "Length of Longest Substring Without Repeating Characters: " << result << endl;

    return 0;
}
