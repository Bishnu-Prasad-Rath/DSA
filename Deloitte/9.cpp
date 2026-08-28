//First non-repeating characters

#include <iostream>
#include <vector>
#include <string>
using namespace std;

char firstNonRepeating(string s){
  vector<int> count(256,0);
  for(char c : s){
    count[c]++;
  }
  for(char c : s){
    if(count[c] == 1) return c;
  }
  return '-';
}

int main(){

string s1;

  cout << "Enter the string u want to analyze : " << endl;

  cin>>s1;

  char result = firstNonRepeating(s1);

  cout << "The first non repeating character is : " << result << endl;
  
  return 0;
}