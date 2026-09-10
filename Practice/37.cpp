#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

long long maxProductPair(vector<int>& arr){
  long long max1 = INT_MIN, max2 = INT_MIN;
  long long min1 = INT_MAX, min2 = INT_MAX;

  for(int num : arr){
    if(num > max1){
      max2 = max1;
      max1 = num;
    }else if(num > max2){
      max2 = num;
    }
    if(num < min1){
      min2 = min1;
      min1 = num;
    }else if(num < min2){
      min2 = num;
    }
  }
  return max(max1 * max2, min1 * min2);
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

  cout << "The max prodcut pair is : " << maxProductPair(arr1) << endl;

  return 0;
}