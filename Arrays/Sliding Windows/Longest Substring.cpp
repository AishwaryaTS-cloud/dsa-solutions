/**
 * Problem: Longest Substring
 * Platform: LeetCode
 * URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Difficulty: Medium
 * Topic: Arrays
 * Pattern: Sliding Windows
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 *
 * Approach:
 * N/A
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> seen;

        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++) {

            while (seen.count(s[right])) {
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
