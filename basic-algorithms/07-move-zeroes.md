## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I moved all non-zero elements toward the beginning of the array while maintaining their original order. After placing the non-zero elements, I filled the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The relative order of the non-zero elements must remain unchanged.