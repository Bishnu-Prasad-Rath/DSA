#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findThreeSum(vector<int>& arr,int target){
  if (arr.size() < 3) return {};
  sort(arr.begin(),arr.end());
  for(size_t i = 0;i<arr.size() - 2;i++){
    int left = i + 1,right = arr.size() - 1;
    while(left < right){
      int sum = arr[i] + arr[left] + arr[right];
      if(sum == target) return {arr[i],arr[left],arr[right]};
      else if(sum < target) left++;
      else right--;
    }
  }
  return {};
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

  cout << "Enter the targeted element : " << endl;

  int t;
  cin>>t;

  vector<int> result = findThreeSum(arr1, t);
if (!result.empty()) {
    cout << "Triplet: (" << result[0] << ", " << result[1] << ", " << result[2] << ")" << endl;
} else {
    cout << "No triplet found" << endl;
}
  
  return 0;
}