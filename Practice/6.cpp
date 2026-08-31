//Reverse a number

#include <iostream>
using namespace std;

long long reverseNumber(int n){
  long long reversed = 0;
  while(n != 0){
    reversed = reversed * 10 + n%10;
    n /= 10;
  }
  return reversed;
}

int main(){

cout << "Enter the number" << endl;
  int n;
  cin>>n;

  cout << "The reversed output is : " << reverseNumber(n) << endl;
  
  return 0;
}