//Check whether a number is Armstrong

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
  int sum = 0, temp = n, digits = 0;
  while(temp > 0){
    digits++;
    temp /= 10;
  }
  temp = n;
  while(temp > 0){
    sum += pow(temp % 10,digits);
    temp /= 10;
  }
  return sum == n;
}

int main(){

  cout << "Enter the number : " << endl;
  int n1;
  cin>>n1;

  bool result = isArmstrong(n1);

  if(result){
    cout << "This is a armstrong number." << endl;
  }else{
    cout << "THis is not a armstrong number" << endl;
  }

  return 0;
}