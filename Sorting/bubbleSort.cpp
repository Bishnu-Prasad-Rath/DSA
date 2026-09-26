#include <iostream>
#include <vector>
#include <utility>   // for swap

using namespace std;

void bubbleSort(vector<int>& arr) {
int n = arr.size();
  
  for(int i=0; i< n-1;i++){

    bool swapped = false;
    
    for(int j=0; j<n-i-1;j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
    }

if(!swapped) break;
    
  }
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr;

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    bubbleSort(arr);

    cout << "The sorted array is: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}