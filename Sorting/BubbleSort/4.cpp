#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int bubbleSortAndCountSwaps(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);

                swapCount++;   
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    return swapCount;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int swaps = bubbleSortAndCountSwaps(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    cout << "\nNumber of swaps: " << swaps << endl;

    return 0;
}