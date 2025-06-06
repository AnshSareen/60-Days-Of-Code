## 📅 Day 5 – LeetCode Problems (05-06-2025)

### 🌟 Daily LeetCode Challenge  
Today’s official challenge:  
🔹 **[Lexicographically Smallest Equivalent String](https://leetcode.com/problems/lexicographically-smallest-equivalent-string)**  
✔️ Solved as part of today’s problem set (listed below).

---

### 🧠 Problems Solved: 5

| Problem                                                                                                  | Topic                             | Solution File                                      |
|----------------------------------------------------------------------------------------------------------|-----------------------------------|----------------------------------------------------|
| [Array Partition](https://leetcode.com/problems/array-partition/)                                        | Greedy, Sorting                   | [array_partition.c](array_partition.c)            |
| [Get Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/)                      | Arrays                            | [concatenation_of_array.c](concatenation_of_array.c) |
| [Max Chunks To Make Sorted (Prefix Method)](https://leetcode.com/problems/max-chunks-to-make-sorted/)    | Arrays, Prefix Max/Min            | [max_chunks_prefix_method.c](max_chunks_prefix_method.c) |
| [Number of Subarrays with Bounded Maximum](https://leetcode.com/problems/number-of-subarrays-with-bounded-maximum/) | Sliding Window, Counting          | [subarrays_with_bounded_maximum.c](subarrays_with_bounded_maximum.c) |
| [Lexicographically Smallest Equivalent String](https://leetcode.com/problems/lexicographically-smallest-equivalent-string/) | Union Find, String Mapping        | [smallest_equivalent_string.c](smallest_equivalent_string.c) |

---

### 📘 Notes & Learnings

- **Array Partition**: A classic greedy sort trick — pick every second number after sorting to maximize sum of minimums.
- **Get Concatenation of Array**: Straightforward logic using a new array and two passes; clean implementation and great for warm-up.
- **Max Chunks To Make Sorted**: Used prefix max and suffix min arrays to count valid split points. Great technique for identifying independent segments.
- **Subarrays with Bounded Maximum**: Applied a range-counting trick with a helper `sum()` to count valid subarrays without brute force.
- **Lexicographically Smallest Equivalent String**: Union-Find structure applied to maintain character equivalence classes and transform strings accordingly.

---

- As always, each solution here is extended into a **complete, runnable C program** with `main()` for clarity and local testing.  
📌 **Note:** The original LeetCode problems only require implementing a specific function.
