#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstUnique(vector<int> &arr){
  unordered_map<int,int> freq;

  for(int x : arr){
    freq[x]++;
  }

for(int x : arr){
  if(freq[x] == 1) return x;
}

  return -1;
}

int main(){

  vector<int> arr = {2,3,2,5,3,2};
  
  
  int result = firstUnique(arr);

  if(result == -1){
    cout << "There is no unique value available in this array." << endl;
  }else{
    cout << "The first unique value in this array is : " << result << endl;
  }
  
  return 0;
}