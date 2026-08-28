#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int> & arr, int n){
  long long expectedSum = (long long)n * (n+1)/2;
  long long actualSum = 0;

  for(int num : arr){
    actualSum += num;
  }

  return expectedSum - actualSum;
}

int main(){

int n;
  
cout << "enter the length : " << endl;

  cin >> n;

  cout << "Enter the elements of the array" << endl;

  vector<int> arr1;
  
  for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        arr1.push_back(value);
    }

  cout << "The missing number is : " << findMissingNumber(arr1,n) << endl;
  
  return 0;
}