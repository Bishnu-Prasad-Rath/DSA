#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void countFrequency(vector<int>& arr) {
    unordered_map<int, int> freq;

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    vector<int> arr = {2, 3, 2, 5, 3, 2, 4};

    countFrequency(arr);

    return 0;
}