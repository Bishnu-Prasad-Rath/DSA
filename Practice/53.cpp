#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string &a, string &b){
  if(a.size() != b.size()) return false;

int count[26] = {0};
  
  for(char c : a) count[c - 'a']++; 
  for(char c : b) count[c - 'a']--;

  for(int i=0;i<26;i++){
    if(count[i] != 0) return false;
  }

  return true;
}

int main(){

string a;
  string b;

  cout << "Enter the first word" << endl;
  cin>>a;

  cout << "Enter the second word" << endl;
  cin>>b;

  bool result = isAnagram(a,b);

  if(result){
    cout << "These words are in anagram" << endl;
  }else{
    cout << "These words are not in anagram" << endl;
  }

  return 0;
}