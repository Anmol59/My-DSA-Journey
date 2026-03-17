#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Job {
    char id;
    int dead, profit;
};

// Sort jobs descending by profit
bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    Job jobs[] = {{'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(jobs) / sizeof(jobs[0]);

    sort(jobs, jobs + n, compare);

    int max_profit = 0;
    int result[3] = {0}; // Schedule array (size = max deadline)
    bool slot[3] = {false};

    for (int i = 0; i < n; i++) {
        // Try to share job from its deadline backwards
        for (int j = min(3, jobs[i].dead) - 1; j >= 0; j--) {
            if (slot[j] == false) {
                result[j] = i;
                slot[j] = true;
                max_profit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "Max Profit: " << max_profit << endl;
    return 0;
}