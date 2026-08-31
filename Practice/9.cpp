#include <iostream>
#include <cmath>
using namespace std;

int sumDigits(int n){
  int sum = 0;
  n = abs(n);
  while(n>0){
    sum += n%10;
    n /= 10;
  }
  return sum;
}

int main(){

  cout << "Enter the number" << endl;
  int n1;
  cin>>n1;
  cout << "The sum of digits of this number is : " << sumDigits(n1) << endl;

  return 0;
}