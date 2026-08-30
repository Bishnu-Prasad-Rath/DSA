#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void sortColors(vector<int> &nums) {
    int low = 0, mid = 0;
    int high = nums.size() - 1;  

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;  
        } 
        else if (nums[mid] == 1) {
            mid++;
        } 
        else {  
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    cout << "Enter the size of the array : " << endl;
    int n;
    cin >> n;

    cout << "Enter the elements of the array (0, 1, or 2 only):" << endl;
    vector<int> arr1;

    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        arr1.push_back(e);
    }

    sortColors(arr1);  

    cout << "The sorted array is: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}