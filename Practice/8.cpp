//Cout  digits in a number

#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n){
  if(n==0) return 1;
  return floor(log10(abs(n))) + 1;
}

int main(){

cout << "Enter the number" << endl;
  int n1;
  cin>>n1;

  cout << "The number of digits in this number is : " << countDigits(n1) << endl;
  
  return 0;
}