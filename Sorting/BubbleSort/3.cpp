#include <iostream>
#include <utility>
#include <string>

//Sorting alphabets using bubble sort

void bubbleSort(string& str){
  int n = str.size();

  for(int i = 0; i<n-1;i++){
    bool swapped;
    for(int j = 0; j<n-i-1;j++){
      if(str[j] > str[j+1]){
        swap(str[j],str[j+1]);
        swapped = true;
      }
    }
    if(!swapped){
      break;
    }
  }
}

int main(){

string str;

  cout << "Enter the string" << endl;

  cin>>str;

  bubbleSort(str);

  cout << "Alphabetically sorted string : " << str << endl;
  
  return 0;
}