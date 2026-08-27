// Maximum element in an array

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int findMax(vector<int> &arr){
  int maxValue = INT_MIN;

  for(int num : arr){
    if(num > maxValue) maxValue = num;
  }
  return maxValue;
}

int main(){
  cout << "Enter the size of an vector" << endl;

  int size;

  cin >> size;

  vector<int> arr;

  cout << "Enter" << size << "elements" << endl;

  for(int i=0;i<size;i++){
    int value;

    cin>>value;

    arr.push_back(value);
  }

  int result = findMax(arr);

  cout << "Max value in this array is : " << result << endl;
}