//Move all elements to the end
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr){
  int insertPos = 0;
  for(int num : arr){
    if(num != 0) arr[insertPos++] = num;
  }
  while(insertPos < arr.size()){
    arr[insertPos++] = 0;
  }
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

  moveZeroes(arr1);

  cout << "After processing : " << endl;

  for(int num : arr1){
    cout << num << " " ;
  }

  return 0;
}