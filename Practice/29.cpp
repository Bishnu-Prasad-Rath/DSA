// Find leaders in an array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    vector<int> leaders;
    if (arr.empty()) return leaders;

    // The rightmost element is always a leader
    int maxFromRight = arr.back();
    leaders.push_back(maxFromRight);

    // Traverse from right to left
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            leaders.push_back(maxFromRight);
        }
    }
    
    // Reverse to get leaders in original order
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    cout << "Enter the length of the array: ";
    int n;
    cin >> n;

    vector<int> arr1;
    cout << "Enter the elements in this array: ";

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        arr1.push_back(value);
    }

    vector<int> arrayOfLeaders = findLeaders(arr1);

    cout << "Leaders in the array: ";
    for (int num : arrayOfLeaders) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}