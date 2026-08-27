#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string s1, string s2){
  if(s1.length() != s2.length()) return false;

  vector<int> count(26,0);

  for(int i=0; i< s1.length(); i++){
    count[s1[i] - 'a']++;
    count[s2[i] - 'a']--;
  }

  for (int c: count){
    if(c != 0) return false;
  }
  return true;
}

int main(){

string str1;
string str2;

  cout << "Enter 2 strings" << endl;

  cin>>str1>>str2;

  bool result = isAnagram(str1,str2);

  if(result){
    cout << "Strings are in anagram" << endl;
  }else{
    cout << "Strings are not in anagram" << endl;
  }

  return 0;
}