## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of all strings with the characters of the first string. The comparison stops when a character is different or when the end of any string is reached.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If the strings have no common prefix, the result is an empty string.