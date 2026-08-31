#include <iostream>
using namespace std;

int countSetBits(int n){
  int count = 0;
  while(n > 0){
    n &= (n-1);
    count++;
  }
  return count;
}

int main(){

cout << "Enter the number : " << endl;
  int n1;
  cin>>n1;

  cout << "The setbits in this number are : " << countSetBits(n1) << endl;
  
  return 0;
}