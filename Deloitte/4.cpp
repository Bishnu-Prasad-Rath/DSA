// Find duplicate elemenst in an array

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void findDuplicates(vector<int> & arr){
  unordered_set<int> seen, duplicate;

  for(int num : arr){
    if(seen.count(num)){
      duplicate.insert(num);
    }else{
      seen.insert(num);
    }
  }
  for(int num : duplicate) cout << "Duplicated numbers are" <<  num << endl;
}

int main(){

    int size;
    cout << "How many numbers? ";
    cin >> size;
    
    vector<int> numbers;
    
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        numbers.push_back(value);
    }

   findDuplicates(numbers);

  return 0;
}