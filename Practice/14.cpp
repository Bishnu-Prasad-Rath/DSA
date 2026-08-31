//Check the number is power of two
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
  return n>0 && (n&(n-1)) == 0;
}

int main(){

cout << "Enter the number" << endl;

  int n1;
  cin>>n1;

  bool result = isPowerOfTwo(n1);

  if(result){
    cout<< "This number is a power of 2" << endl;
  }else{
    cout << "This number is not a power of 2" << endl;
  }
  
  return 0;
}