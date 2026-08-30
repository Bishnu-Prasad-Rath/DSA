#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

int maxSubArray(vector<int> &nums){

  int maxSum = INT_MIN;
  int currentSum = 0;

  for(int num : nums){
    currentSum+=num;
    if(currentSum > maxSum){
      maxSum = currentSum;
    }
    if(currentSum < 0){
      currentSum = 0;
    }
  }
  return maxSum;
}

int main(){

cout << "Enter the size of the array" << endl;

  int n;
  cin>>n;

  cout << "Enter the elements of the array" << endl;

  vector<int> arr1;
  for(int i=0;i<n;i++){
    int value;
    cin>>value;
    arr1.push_back(value);
  }

  maxSubArray(arr1);

  cout << "The maxSubArrat is : ";
  for(int i=0;i<arr.size();i++){
    cout << arr[i] << " ";
  }
  cout<<endl;
  
  return 0;
}