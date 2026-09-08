#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateLeft(vector<int>& arr, int k){

int n = arr.size();
  if(n < 0) return;
  k = k%n;

  reverse(arr.begin(),arr.begin() + k);
  reverse(arr.begin() + k,arr.end());
  reverse(arr.begin(), arr.end());
  
}

int main(){

    cout << "Enter the length of the array: ";
    int n;
    cin >> n;
    
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

  cout << "ENter the k : " << endl;

  int k1;
  cin>>k1;

  rotateLeft(arr1,k1);

  cout << "The result is : " << endl;

  for(int num : arr1){
    cout << num << " ";
  }

  return 0;
}