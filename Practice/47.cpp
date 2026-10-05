#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int prefixDistinct(vector<int> arr){
  unordered_set<int> seen;
  int distinctValue = 0;
  long long totalSum = 0;

  for(int x : arr){
    if(seen.find(x) == seen.end()){
      seen.insert(x);
      distinctValue ++;
    }
    totalSum += distinctValue;
  }
  return (int)totalSum;
}

int main(){

vector<int> arr = {1,2,1,3,2}
  
  return 0;
}