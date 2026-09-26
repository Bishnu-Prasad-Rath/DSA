#include <iostream>
#include <vector>
#include <utility>

using namespace std;

//Ascending Order

void bubbleSort(vector<int>& arr){
  int n = (int)arr.size();

  for(int i=0; i<n - 1;i++){

bool swapped = false;
    
    for(int j = 0;j < n-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
    }

    if(!swapped) break;
    
  }
}

int main(){

  cout << "Enter the number of elements of an array : " << endl;

  int n;

  cin>>n;

  vector<int> arr;

  cout << "Enter the " << n << "elements" << endl;

  for(int i = 0; i<n; i++){
    int value;
    cin>>value;

    arr.push_back(value);
  }

  bubbleSort(arr);

  cout << "The sorted array is : ";

  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}