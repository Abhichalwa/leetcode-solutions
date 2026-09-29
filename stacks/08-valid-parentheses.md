## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket is found, it is compared with the most recently stored opening bracket to check whether the pair is valid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The brackets must close in the correct order, and every opening bracket must have a matching closing bracket.