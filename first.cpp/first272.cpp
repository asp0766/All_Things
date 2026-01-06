// Stock Span : - 


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> stockSpan(vector<int>& prices) {
    stack<int> s; // Stores indices
    vector<int> span(prices.size());

    for (int i = 0; i < prices.size(); i++) {
        while (!s.empty() && prices[s.top()] <= prices[i]) {
            s.pop();
        }

        span[i] = (s.empty()) ? (i + 1) : (i - s.top());
        s.push(i);
    }

    return span;
}

int main() {
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> span = stockSpan(prices);

    cout << "Stock Span: ";
    for (int s : span) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
