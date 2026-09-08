#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int minSubArray(vector<int>& arr){
  int minSum = INT_MAX, currentSum = 0;
  for(int num : arr){
    currentSum += num;
    if(currentSum < minSum) minSum = currentSum;
    if(currentSum > 0) currentSum = 0;
  }
  return minSum;
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

  cout << "The minSum is : " << minSubArray(arr1) << endl;

  return 0;
}