//TwoSum using Bruteforce method


#include <iostream>
#include <vector>
using namespace std;

pair<int, int> indexFinder(vector<int>& arr, int target) {

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {

            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

int main() {

    int n, target;

    cout << "Enter the length of the array: ";
    cin >> n;

    vector<int> arr;

    cout << "Enter the array elements: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    cout << "Enter the target: ";
    cin >> target;

    pair<int, int> result = indexFinder(arr, target);

    cout << "[" << result.first << ", "
         << result.second << "]" << endl;

    return 0;
}