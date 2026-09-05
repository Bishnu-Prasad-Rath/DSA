//Find all duplicate elements
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findDuplicates(vector<int>& arr){
  unordered_map<int, int> freq;
  vector<int> duplicates;

  for(int num : arr){
    freq[num]++;
    if(freq[num] == 2) duplicates.push_back(num);
  }
  return duplicates;
}

int main(){

 cout << "Enter the length of the array: ";

    int n;
    cin >> n;

    vector<int> arr1;

    cout << "Enter the elements in this array: ";

    for (int i = 0; i < n ; ++i) {
        int value;
        cin >> value;

        arr1.push_back(value);
    }

 vector<int> duplicates =  findDuplicates(arr1);

  cout << "The duplicate numbers are : " << endl;

     if (duplicates.empty()) {
       cout << "None found" << endl;
   } else {
       for(int num : duplicates){
           cout << num << " ";
       }
       cout << endl;
   }
 
  return 0;
}