//String is in palindrome or not

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string s){
  int left = 0;
  int right = s.length() - 1;

  while(left < right){
    swap(s[left],s[right]);
    left ++;
    right --;
  }
  return s;
}

int main(){

  string str;

  cout << "Enter the string" << endl;

  cin>>str;

  string result = reverseString(str);

  cout << "The reverse of this string is : " << result << endl;
  
  return 0;
}