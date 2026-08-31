#include <iostream>
#include <vector>
using namespace std;

void sieve(int n){
  vector<bool> isPrime(n+1,true);
  isPrime[0] = isPrime[1] = false;
  for(int p = 2; p*p <= n; p++){
    if(isPrime[p]){
      for(int i = p*p; i<=n; i+= p)
         isPrime[i] = false;
    }
  }
  for(int p = 2; p<=n; p++){
    if(isPrime[p]) cout << p << " ";
  }
}

int main(){

  cout << "Enter the number : " << endl;
  int n;
  cin>>n;

  cout << "The prime numbers are : " << endl;
  sieve(n);

  return 0;
}