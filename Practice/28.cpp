#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& arr){
  int candidate = -1, count = 0;
  for(int num : arr){
    if(count == 0){
      candidate = num;
      count = 1;
    }else if(num == candidate){
      count++;
    }else{
      count--;
    }
  }
  return candidate;
}

int main(){

cout << "Enter the length of the array: ";

    int n;
    cin >> n;

    vector<int> arr1;

    cout << "Enter the elements in this array: ";

    for (int i = 0; i < n ; ++i) {
        int value;
        cin >> value;

        arr1.push_back(value);
    }

  cout << "The major element in this array is : " << majorityElement(arr1) << endl;

  return 0;
}