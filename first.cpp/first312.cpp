// Nearby cars : - 


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Car {
public:
    int idx;
    int distSq;

    Car(int idx, int distSq) {
        this->idx = idx;
        this->distSq = distSq;
    }

    // Min-heap comparator
    bool operator>(const Car &obj) const {
        return this->distSq > obj.distSq;
    }
};

void nearbyCars(vector<pair<int, int>> pos, int K) {
    priority_queue<Car, vector<Car>, greater<Car>> pq;

    for (int i = 0; i < pos.size(); i++) {
        int distSq = (pos[i].first * pos[i].first) + (pos[i].second * pos[i].second);
        pq.push(Car(i, distSq));
    }

    for (int i = 0; i < K && !pq.empty(); i++) {
        cout << "Car: " << pq.top().idx << endl;
        pq.pop();
    }
}

int main() {
    vector<pair<int, int>> pos = {{3, 3}, {5, -1}, {-2, 4}};
    int K = 2;
    nearbyCars(pos, K);
    return 0;
}
