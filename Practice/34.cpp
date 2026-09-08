#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& arr){
  int maxSum = INT_MIN,currentSum = 0;
  for(int num : arr){
    currentSum += num;
    if(currentSum > maxSum) maxSum = currentSum;
    if(currentSum < 0) currentSum = 0;
  }
  return maxSum;
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

  int result = maxSubArray(arr1);

  cout << "Here the maxSum is : " << result << endl;

  return 0;
}