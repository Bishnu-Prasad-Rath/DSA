#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalinDrome(string s){
  int left = 0;
  int right = s.length() - 1;

  while(left < right){
    if(s[left] != s[right]){
      return false;
    }
    left ++;
    right --;
  }
  return true;
}

int main(){

cout << "Enter the string" << endl;

  string str;

  cin >> str;

  bool result = isPalinDrome(str);

  if(result){
    cout << "The string is a palindome." << endl;
  }else {
    cout << "The string is not a palindrome" << endl;
  }
  
  return 0;
}