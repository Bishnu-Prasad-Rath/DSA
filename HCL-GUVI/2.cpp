//Optimized code for TwoSum using unordered_map

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int, int> twoSum(vector<int>& arr, int target){
  unordered_map<int,int> mp;
  for(int i=0;i<arr.size();i++){
    int complement = arr[i] - target;

    if(mp.find(complement) != mp.end()){
      return{mp[complement],i};
    }
    mp[arr[i]] = i;
  }
  return {-1,-1};
}

int main(){

int n,target;

  cout << "enter array size : ";
  cin>>n;

  vector<int> arr(n);
  cout << "Enter array elements : ";

for(int i=0;i<n;i++){
  cin>>arr[i];
}

  cout << "Enter target : ";
  cin>>target;

  pair<int,int> result = twoSum(arr,target);

  cout << "First result : " << result.first << "and second result is : " << result.second << endl;
  
  return 0;
}