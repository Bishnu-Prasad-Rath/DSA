#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> arrayIntersection(vector<int>& arr1,vector<int>& arr2){
  unordered_set<int> seen(arr1.begin(), arr1.end());
  vector<int> result;
  for(int num : arr2){
    if(seem.erase(num)){
      result.push_back(num);
    }
  }
  return result;
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

  return 0;
}