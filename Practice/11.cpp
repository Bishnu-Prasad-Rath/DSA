#include <iostream>
using namespace std;

int factorial(int n){
  int fact = 1;
  for(int i=2;i<=n;i++) fact *= i;
  return fact;
}

bool isStrong(int n){
  int sum = 0, temp = n;
  while(temp>0){
    sum += factorial(temp % 10);
    temp /= 10;
  }
  return sum == n;
}

int main(){

cout << "Enter the number" << endl;

  int n1;
  cin>>n1;

  bool result = isStrong(n1);

  if(result){
    cout<< "This number is a strong number" << endl;
  }else{
    cout << "This number is not a strong number" << endl;
  }
  
  return 0;
}