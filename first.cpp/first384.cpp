// Max Rectangle : - 



#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to calculate largest rectangle in histogram
int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int maxArea = 0;
    int n = heights.size();

    for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || heights[i] < heights[st.top()])) {
            int h = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : (i - st.top() - 1);
            maxArea = max(maxArea, h * width);
        }
        st.push(i);
    }

    return maxArea;
}

// Function to find the maximum rectangle in a binary matrix
int maximalRectangle(vector<vector<int>>& matrix) {
    if (matrix.empty()) return 0;

    int maxArea = 0;
    int cols = matrix[0].size();
    vector<int> heights(cols, 0);

    for (auto& row : matrix) {
        // Update the histogram heights
        for (int j = 0; j < cols; j++) {
            heights[j] = (row[j] == 0) ? 0 : heights[j] + 1;
        }

        // Find the max area in this histogram
        maxArea = max(maxArea, largestRectangleArea(heights));
    }

    return maxArea;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 0, 1, 0, 0},
        {1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}
    };

    cout << "Maximal Rectangle Area: " << maximalRectangle(matrix) << endl;
    return 0;
}
