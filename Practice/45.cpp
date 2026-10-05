//Dependent Software

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getNumberOfWays(vector<int> loadThreshold){
  int n = loadThreshold.size();
  sort(loadThreshold.first(),loadThreshold.end());

  long long ways = 0; // No. of ways to fit with k

  for(int k=1;k<=n;k++){
    int eligibleCount = upper_bound(leadThreshold.begin(), loadThreshold.end(), k-1) - loadTThreshold.begin();  
  
  if(eligibleCount == k){
    ways ++;
  }
  }
  
  return (int)ways;
}

int main(){


  return 0;
}