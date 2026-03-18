#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    int tableSize = 10;
    vector<list<int>> hashTable(tableSize);

    // Example data
    vector<int> values = {15, 25, 35, 5, 7, 17, 27};

    // Insert into hash table
    for (int val : values) {
        int index = val % tableSize;
        hashTable[index].push_back(val);
    }

    // Find max chain length
    int maxChain = 0;

    for (int i = 0; i < tableSize; i++) {
        int chainLength = hashTable[i].size();
        if (chainLength > maxChain) {
            maxChain = chainLength;
        }
    }

    cout << "Maximum Chain Length: " << maxChain << endl;

    return 0;
}