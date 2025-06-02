## 📅 Day 2 – LeetCode Problems

### ✅ Problems Solved

| Problem | Topic | Solution File |
|--------|--------|----------------|
| [Candy (135)](https://leetcode.com/problems/candy/) | Greedy, Two-Pass | [Candy.c](Candy.c) |
| [Find All Numbers Disappeared in an Array (448)](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/) | Arrays | [Find_Disappeared_Numbers.c](Find_Disappeared_Numbers.c) |
| [Reverse String (344)](https://leetcode.com/problems/reverse-string/) | Two-Pointer, Strings | [Reverse_String.c](Reverse_String.c) |
| [Product of Array Except Self (238)](https://leetcode.com/problems/product-of-array-except-self/) | Arrays, Prefix/Suffix | [Product_Except_Self.c](Product_Except_Self.c) |
| [Maximum Subarray (53)](https://leetcode.com/problems/maximum-subarray/) | Dynamic Programming, Kadane’s Algorithm | [Maximum_Subarray.c](Maximum_Subarray.c) |

---

### 📝 Personal Insights

- **Candy (135)**: Had to think for a while—good greedy problem. Solved it using a double pass: left to right and right to left, ensuring each child gets more candies than a lower-rated neighbor.

- **Find All Numbers Disappeared in an Array (448)**: To handle efficiently, I used a boolean array where each index is marked `true` if the number is present. This allowed identifying the missing numbers cleanly in a single pass.

- **Reverse String (344)**: Easy problem. Just needed to swap characters from both ends toward the center.

- **Product of Array Except Self (238)**: Initially solved using division, but then had to revise after learning division wasn’t allowed. Took a hint and learned about the prefix-suffix approach—new and insightful for me.

- **Maximum Subarray (53)**: Identified it as a divide and conquer problem and also recognized the dynamic programming pattern. Though the divide and conquer solution was space-efficient, it took time to implement. The DP version is conceptually similar but uses an array to store previous results.
