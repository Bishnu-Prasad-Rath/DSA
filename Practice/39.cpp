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



  return 0;
}