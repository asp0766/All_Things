// Job Sequencing Problem : -


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    int id, deadline, profit;
};

bool cmp(Job a, Job b) {
    return a.profit > b.profit; // Sort by profit descending
}

class Solution {
public:
    vector<int> JobScheduling(Job arr[], int n) {
        sort(arr, arr + n, cmp);

        int maxDeadline = 0;
        for (int i = 0; i < n; i++)
            maxDeadline = max(maxDeadline, arr[i].deadline);

        vector<int> slot(maxDeadline + 1, -1); // time slots
        int countJobs = 0, totalProfit = 0;

        for (int i = 0; i < n; i++) {
            for (int j = arr[i].deadline; j > 0; j--) {
                if (slot[j] == -1) {
                    slot[j] = arr[i].id;
                    countJobs++;
                    totalProfit += arr[i].profit;
                    break;
                }
            }
        }

        return {countJobs, totalProfit};
    }
};

int main() {
    Job arr[] = {{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution sol;
    vector<int> res = sol.JobScheduling(arr, n);

    cout << "Jobs done: " << res[0] << ", Total Profit: " << res[1] << endl;

    return 0;
}
