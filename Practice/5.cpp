//Check whether a number is Palindrome

#include <iostream>
using namespace std;

bool isPrime(int n){
  if(n < 0) return false;
  long long reverse, temp = n;
  while(temp != 0){
    reverse = reverse * 10 + temp % 10;
    temp /= 10;
  }
  return reverse == n;
}

int main(){

cout << "Enter the number : " << endl;
  int n1;
  cin>>n1;

  bool result = isPrime(n1);

  if(result){
    cout << "This is a Palindrome" << endl;
  }else{
    cout << "This is not a Plindrome" << endl;
  }
  
  return 0;
}