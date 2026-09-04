#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondSmallest(vector<int>& arr){
  int first = INT_MAX, second = INT_MAX;
  for(int num : arr){
    if(num < first){
      second = first;
      first = num;
    }else if(num < second && num != first){
      second = num;
    }
  }
  return second;
}

int main(){

cout << "Enter the length of the array : " << endl;

int n;

  cin>>n;

  cout << "Enter the elements in this array : " << endl;

  vector<int> arr1;

  for(int i=0;i<n;i++){
    int v;
    cin>>v;
    arr1.push_back(v);
  }

  cout << "The second smallest value in this array is : " << secondSmallest(arr1) << endl;

  return 0;
}