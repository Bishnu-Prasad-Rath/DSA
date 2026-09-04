//Find the frequency of an particular element
#include <iostream>
#include <vector>
using namespace std;

int findFrequency(vector<int>& arr,int target){
  int count = 0;
  for(int num : arr){
    if(num == target) count++;
  }
  return count;
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

  cout << "Enter the targeted element : " << endl;

  int target;
  cin>>target;

  cout << "The frequency of targeted element is : " << findFrequency(arr1, target) << endl;
  
  return 0;
}