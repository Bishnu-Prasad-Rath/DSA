#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int firstRepetative(vector<int> &arr){

unordered_map<int,int> freq;

  for(int x : arr){
    freq[x]++;
  }

  for(int x : arr){
    if(freq[x] > 1) return x;
  }

  return -1;
}

int main(){

vector<int> arr = {1,2,3,4,5};

  int result = firstRepetative(arr);

  if(result == -1) cout << "There is no repitative number present in this array" << endl;
  else cout << "The first repetative number is" << result << endl;
  
  return 0;
}