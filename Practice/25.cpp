//Find the missing number from 1 to N
#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr, int n1){
  long long expectedSum = (long long)n1 * (n1 + 1)/2;
  long long actualSum = 0;
  for(int num : arr) actualSum += num;
  return expectedSum - actualSum;
}

int main(){

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

  cout << "The mising number is : " << findMissing(arr1,n) << endl;

  return 0;
}