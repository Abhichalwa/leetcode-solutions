## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum price seen so far while going through the array. For each price, I calculated the possible profit and updated the maximum profit when a larger value was found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices continuously decrease, the maximum profit remains 0 because no profitable transaction is possible.