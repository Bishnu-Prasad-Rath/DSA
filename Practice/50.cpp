#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int secondLargest(int arr[],int size){

sort(arr,arr + size);

  int n = size - 1;

int first = INT_MIN,second = INT_MIN;
  
  bool foundFirst = false;
  bool foundSecond = false;

for(int i=0;i<=n;i++){

if(!foundFirst || arr[i] > first){
  second = first;
  foundSecond = foundFirst;
  first = arr[i];
  foundFirst = true;
else if(arr[i] < first && (!foundSecond || arr[i] > second)){
    second = arr[i];
    foundSecond = true;
}
  
}
  
if(foundSecond) return second;
else return -1;
  
}

int main(){

int arr[5] = {7,5,1,8,6};

  int size = 5;

int result = secondLargest(arr,size);

cout << "The second largest is : "<< result << endl;

}