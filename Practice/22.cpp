#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr){
  if(arr.empty()) return 0;
  int insertPos = 1;
  for(size_t i=1;i<arr.size();i++){
    if(arr[i] != arr[i-1]){
      arr[insertPos++] = arr[i];
    }
  }
  return insertPos;
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

  cout << "The actual number of elements without repeating : " << removeDuplicates(arr1) << endl;
  
  return 0;
}