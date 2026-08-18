//Work -> i/p an array output sum = the sume of array using recursion

#include <iostream>
using namespace std;

int getSum(int arr[],int size){

//base case

  if(size == 0){
    return 0;
  }

  if(size == 1){
    return arr[0];
  }

  int remainingPart = getSum(arr+1,size-1);
  int sum1 = arr[0] + remainingPart;

  return sum1;
  
}


int main(){

int arr[5] = {2,3,4,5,6};

int size = 5;

  int sum = getSum(arr,size);

  cout << "The sum of elements of array is : " << sum << endl;
  
  return 0;
}