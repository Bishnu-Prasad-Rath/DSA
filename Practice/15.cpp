#include <iostream>
#include <vector>
using namespace std;

int findSingle(vector<int> arr){

int result = 0;

  for(int num : arr){
    result ^= num;
  }
  
  return result;
}

int main(){

cout << "Enter the size of the array" << endl;

  int n;
  cin>>n;

  cout << "Enter the elements of the array" << endl;

  vector<int> arr1;
  for(int i=0;i<n;i++){
    int v;
    cin>>v;
    arr1.push_back(v);
  }

  int result = findSingle(arr1);

  cout << "The non-repeating element of this array is : " << result << endl;

  return 0;
}