// Circular Tour : - 


#include <iostream>
#include <queue>
using namespace std;

struct PetrolPump {
    int petrol;
    int distance;
};

int circularTour(PetrolPump pumps[], int n) {
    int start = 0, deficit = 0, balance = 0;

    for (int i = 0; i < n; i++) {
        balance += pumps[i].petrol - pumps[i].distance;
        if (balance < 0) {
            start = i + 1;
            deficit += balance;
            balance = 0;
        }
    }

    return (balance + deficit >= 0) ? start : -1;
}

int main() {
    PetrolPump pumps[] = {{4, 6}, {6, 5}, {7, 3}, {4, 5}};
    int n = sizeof(pumps) / sizeof(pumps[0]);

    int startIndex = circularTour(pumps, n);
    cout << "Starting point: " << startIndex << endl;

    return 0;
}
