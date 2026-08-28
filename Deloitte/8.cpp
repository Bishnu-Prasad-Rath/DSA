// Subarray with given sum

#include <iostream>
#include <vector>

using namespace std;

bool hasSubarraySUm(vector<int> & arr, int target){
  int currentSum = 0;
  int left = 0;
  for(int right = 0; right < arr.size(); right++){
    currentSum += arr[right];
    while(currentSum > target && left <= right){
      currentSum -= arr[left++];
    }
    if (currentSum == target) return true;
  }
  return false;
}

int main(){


  
  return 0;
}