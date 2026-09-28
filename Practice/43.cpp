//Two sum using unordered_map
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int, int> twoSum(vector<int>& arr, int target){
  unordered_map<int,int> seen;

  for(int i=0;i<arr.size();i++){
    int compliment = target - arr[i];

    if(seen.find(compliment) != seen.end()){
      return {compliment, arr[i]};
    }

    seen[arr[i]] = i;
  }
  return {-1,-1};
}

int main(){

  int n;
  
  cout << "Enter the length of the array" << endl;

  cin>>n;

  vector<int> arr;
  
  cout << "Enter the elements of the array : " << endl;

  for(int i=0;i<n;i++){
    int value;
    cin>>value;
    arr.push_bak(value);
  }

  cout << "Enter the targeted value : " << endl;

  int target;

  cin>>target;

  pair<int, int> result = twoSum(arr,target);

  if(result.first == -1 && result.second == -1){
    cout << "No two values sun to" << target << endl;
  }else{
    cout << "The two values are : "
      <<result.first << " and " << result.second << endl;
  }

  return 0;
}