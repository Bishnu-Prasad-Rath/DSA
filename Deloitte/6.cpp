#include <iostream>
#include <vector>
#include <algorithm>  // for sort()
using namespace std;

vector<int> mergeSortedArray(vector<int> arr1, vector<int> arr2) {
    // Sort both arrays first!
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    vector<int> merged;
    int i = 0, j = 0;
    
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) 
            merged.push_back(arr1[i++]);
        else 
            merged.push_back(arr2[j++]);
    }
    
    while (i < arr1.size()) 
        merged.push_back(arr1[i++]);
    while (j < arr2.size()) 
        merged.push_back(arr2[j++]);
    
    return merged;
}

int main() {
    int size1, size2;
    
    cout << "Enter the size of 2 arrays" << endl;
    cin >> size1 >> size2;
    
    cout << "Enter the 1st array" << endl;
    vector<int> arrX;
    for (int i = 0; i < size1; i++) {
        int value;
        cin >> value;
        arrX.push_back(value);
    }
    
    cout << "Enter the 2nd array" << endl;
    vector<int> arrY;
    for (int i = 0; i < size2; i++) {
        int value;
        cin >> value;
        arrY.push_back(value);
    }
    
    vector<int> result = mergeSortedArray(arrX, arrY);
    
    cout << "The merged sorted array is : ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}