//Find the smallest element in an array
#include <iostream>
#include <vector>
using namespace std;

int findSmallest(vector<int>& arr1){
  int minVal = arr1[0];
  for(int num : arr1){
    if(num < minVal) minVal = num;
  }
  return minVal;
}

int main(){

cout << "Enter the length of the array : " << endl;

int n;

  cin>>n;

  cout << "Enter the elements in this array : " << endl;

  vector<int> arr;

  for(int i=0;i<n;i++){
    int v;
    cin>>v;
    arr.push_back(v);
  }

  cout << "The min value in this array is : " << findSmallest(arr) << endl;

  return 0;
}