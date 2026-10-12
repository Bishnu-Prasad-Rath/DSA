#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
  string rev = s;
  reverse(rev.begin(), rev.end());

  return rev == s;
}

int main() {

  cout << "Enter the string : " << endl;
  string s;
  cin >> s;
  bool result = isPalindrome(s);
  if (result)
    cout << "This string is in Palindrome." << endl;
  else
    cout << "This string is not in Palindrome." << endl;

  return 0;
}