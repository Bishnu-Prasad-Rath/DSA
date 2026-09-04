#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& arr){
  for(size_t i = 1; i < arr.size(); i++){
    if(arr[i] < arr[i-1]) return false;
  }
  return true;
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

  bool result = isSorted(arr1);

  if(result){
    cout << "The array is in sorted form." << endl;
  }else{
    cout << "The arrat is notin sorted form." << endl; 
  }

  return 0;
}