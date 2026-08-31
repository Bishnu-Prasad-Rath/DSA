// Check whether a number is Prime

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
  if(n<=1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i == 0) return false;
  }
  return true;
}

void printPrimes(int n){
  for(int i=2;i<=n;i++){
    if(isPrime(i)) cout << i << " ";
  }
}

int main(){

  int n;

  cout << "Enter the no." << endl;
  cin>>n;

  bool result = isPrime(n);
  

  if(result){
    cout << "This no. is prime." << endl;
  }else{
    cout << "This no. is not prime." << endl;
  }

cout << "Prime numbers from 2 to " << n << " are: ";
  printPrimes(n);  
  cout << endl;  
  
  return 0;
}