//Minimum Window Substring

#include <iostream>
#include <string>
#include <vector>
#include <climits>

class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        int m = s.length();
        int n = t.length();
        
        if (m < n) return "";

        // Frequency map for ASCII characters (128 standard ASCII chars)
        std::vector<int> map(128, 0);
        for (char c : t) {
            map[c]++;
        }

        int left = 0, right = 0;
        int count = n; // Remaining characters needed to match 't'
        int minLen = INT_MAX;
        int startIdx = 0;

        while (right < m) {
            char rightChar = s[right];

            // If the character is in 't' and still needed, decrement required count
            if (map[rightChar] > 0) {
                count--;
            }

            // Decrement frequency in map (extra characters will go negative)
            map[rightChar]--;
            right++;

            // When the current window contains all characters of 't'
            while (count == 0) {
                // Update minimum window tracking
                if (right - left < minLen) {
                    minLen = right - left;
                    startIdx = left;
                }

                char leftChar = s[left];
                map[leftChar]++;

                // If map[leftChar] becomes > 0, we removed a required character from 't'
                if (map[leftChar] > 0) {
                    count++;
                }

                // Shrink window from the left
                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(startIdx, minLen);
    }
};

int main() {
    Solution sol;
    std::string s = "ADOBECODEBANC";
    std::string t = "ABC";

    std::cout << "Minimum Window: " << sol.minWindow(s, t) << std::endl; 
    // Output: "BANC"

    return 0;
}