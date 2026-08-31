#include <iostream>
using namespace std;

bool isPerfect(int n){
  if(n<=1) return false;
  int sum = 1;
  for(int i=2; i*i<=n;i++){
    if(n%i == 0){
      sum += i;
      if(i*i != n) sum += n/i;
    }
  }
  return sum == n;
}

int main(){

cout << "Enter the number : " << endl;

  int n1;
  cin>>n1;

  bool result  =isPerfect(n1);

  if(result){
    cout << "This number is a perfect number" << endl;
  }else{
    cout << "This number is not a perfect number" << endl;
  }

  return 0;
}