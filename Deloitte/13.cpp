#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, rank, currentMin = INT_MAX, cuts = 0;
    cin >> n; // Read number of visits
    
    for (int i = 0; i < n; i++) {
        cin >> rank;
        if (rank < currentMin) {
            currentMin = rank;
            cuts++; // Rank changed
        }
    }
    // Subtract 1 because the first entry isn't a "cut"
    cout << cuts - 1 << endl;
    return 0;
}