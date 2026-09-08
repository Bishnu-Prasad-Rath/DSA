//Find pair with given sum
#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int k){
  unordered_set<int> seen;
  for(int num : arr){
    int complement = k - num;
    if(seen.count(complement)) return{complement,num};
    seen.insert(num);
  }
  return{-1,-1};
}

int main(){

 cout << "Enter the length of the array: ";
    int n;
    cin >> n;
    
    // Handle invalid input
    if(n <= 0){
        cout << "Invalid array length!" << endl;
        return 1;
    }
    
    vector<int> arr1;
    cout << "Enter the elements in this array: ";
    
    for(int i = 0; i < n; ++i){
        int value;
        cin >> value;
        arr1.push_back(value);
    }

      int target;
    cout << "Enter the target sum: ";
    cin >> target;
    
    // Call the function
    pair<int, int> result = findPair(arr1, target);
    
    // Display result
    if(result.first != -1){
        cout << "\n✓ Found pair: (" << result.first << ", " << result.second << ")" << endl;
        cout << "  Verification: " << result.first << " + " << result.second 
             << " = " << result.first + result.second << endl;
    } else {
        cout << "\n✗ No pair found with sum " << target << endl;
    }

  

  return 0;
}