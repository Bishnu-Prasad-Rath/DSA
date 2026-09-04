#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void countFrequencies(vector<int>& arr){
  unordered_map<int, int> freq;
  for(int num : arr) freq[num]++;

  for(auto const& [key,val] : freq){
    cout << key << ": " << val << "\n";
  }
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

  countFrequencies(arr1);

  return 0;
}