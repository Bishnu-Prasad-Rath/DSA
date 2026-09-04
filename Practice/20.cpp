// Reverse an array

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void reverseArray(vector<int>& arr) {
    int left = 0;
    int right = static_cast<int>(arr.size()) - 1;

    while (left < right) {
        swap(arr[left], arr[right]);

        ++left;
        --right;
    }
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

    reverseArray(arr1);

    cout << "The reverse of the array is: ";

    for (int value : arr1) {
        cout << value << ' ';
    }

    cout << '\n';

    return 0;
}