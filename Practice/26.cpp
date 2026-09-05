//Find the missing and repeating number
#include <iostream>
#include <utility>
using namespace std;

pair<int, int> findMissingAndRepeating(vector<int>& arr){
  long long n = arr.size();
  long long sumN = n * (n+1)/2;
  long long sumSqN = n * (n+1) * (2*n+1)/6;
  long long sum = 0, sumSq = 0;

  for(int num : arr){
    sum += num;
    sumSq += num * num;
  }

  long long val1 = sum - sumN;
  long long val2 = sumSq - sumSqN;
  val2 = val2 / val1;

  int repeating = (val1 + val2)/2;
  int missing = val2 - repeating;
  return {missing,repeating};
}

int main(){

   cout << "Enter the length of the array: ";

    int n;
    cin >> n;

    vector<int> arr1;

    cout << "Enter the elements in this array: ";

    for (int i = 0; i < n - 1; ++i) {
        int value;
        cin >> value;

        arr1.push_back(value);
    }

  cout << "The missing and repeating values in this array are : " << findMissingAndRepeating(arr1) << endl;
  
  return 0;
}