// MIssing Prefix Positive Sum

#include <vector>
#include <iostream>

using namespace std;

int findSmallestMissingPrefixSum(vector<int> arr) {
    int n = arr.size();
    // Use a frequency array to track numbers present in the current prefix.
    // Size n + 2 to safely handle numbers up to n + 1.
    vector<bool> seen(n + 2, false);
    
    int currentMex = 1;
    long long totalSum = 0;
    long long MOD = 1e9 + 7;
    
    for (int x : arr) {
        // If x is a positive number within our range, mark it as seen
        if (x > 0 && x <= n + 1) {
            seen[x] = true;
        }
        
        // Update currentMex: keep moving forward while the number is seen
        while (seen[currentMex]) {
            currentMex++;
        }
        
        // Add the smallest missing positive for this prefix to the total sum
        totalSum = (totalSum + currentMex) % MOD;
    }
    
    return (int)totalSum;
}

int main(){


  return 0;
}