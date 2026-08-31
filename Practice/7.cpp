//GCD and LCM of two numbers using Euclidean Algorithm

#include <iostream>
using namespace std;

int gcd(int a, int b){
  while(a>0 && b>0){
    if(a>b) a %= b;
    else b %= a;
  }
  return a==0 ? b : a;
}

int lcm(int a, int b){
  return (a/gcd(a,b)) * b;
}

int main(){

cout << "Enter 2 numbers" << endl;
  int n1,n2;
  cin>>n1>>n2;

  cout << "The GCD is : " << gcd(n1,n2) << endl;
  cout << "The LCM is : " << lcm(n1,n2) << endl;
  
  return 0;
}