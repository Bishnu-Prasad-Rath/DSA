#include <iostream>
using namespace std;

int main(){

int a,b;

  cout << "Enter the value of those two values" << endl;

  cin>>a>>b;

  while(b!=0){
    int remainder = a % b;
    a = b;
    b = remainder;
  }

  cout << a << endl;
  return 0;
  
}