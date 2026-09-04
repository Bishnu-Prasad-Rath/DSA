// Find the largest element in an array
#include <iostream>
#include <vector>
using namespace std;

int findLargest(vector<int>& arr){
  int maxVal = arr[0];
  for(int num : arr){
    if(num > maxVal) maxVal = num;
  }
  return maxVal;
}

int main(){

cout << "Enter the length of the array : " << endl;

int n;

  cin>>n;

  cout << "Enter the elements in this array : " << endl;

  vector<int> arr1;

  for(int i=0;i<n;i++){
    int v;
    cin>>v;
    arr1.push_back(v);
  }

  cout << "The max value in this array is : " << findLargest(arr1) << endl;

  return 0;
}