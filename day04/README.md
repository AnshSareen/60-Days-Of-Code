## 📅 Day 4 – LeetCode Problems (04-06-2025)

### 🌟 Daily LeetCode Challenge  
Today’s official challenge:  
🔹 **[Find the Lexicographically Largest String From the Box I](https://leetcode.com/problems/find-the-lexicographically-largest-string-from-the-box-i/)**  
✔️ Solved as part of today’s problem set (listed below).

---

### 🧠 Problems Solved: 2

| Problem                                                                                             | Topic                         | Solution File                                 |
|-----------------------------------------------------------------------------------------------------|-------------------------------|-----------------------------------------------|
| [Find the Lexicographically Largest String From the Box I](https://leetcode.com/problems/find-the-lexicographically-largest-string-from-the-box-i/) | Greedy, String Manipulation  | [lexicographically_largest_substring.c](lexicographically_largest_substring.c) |
| [Max Chunks To Make Sorted](https://leetcode.com/problems/max-chunks-to-make-sorted)                | Arrays, Greedy                | [max_chunks_to_make_sorted.c](max_chunks_to_make_sorted.c)                     |

---

### 📘 Notes & Learnings

- `Find the Lexicographically Largest String From the Box I`: I used a greedy scan to track the **rightmost earliest index** of the lexicographically largest character. For ties, I manually compared windows from both candidates to decide which one would lead to a better result — no stack or library functions used, just raw character comparisons.
- `Max Chunks To Make Sorted`: I handled chunk detection by greedily extending the boundary `end` if a larger number appeared within the current scan window. My method uses manual forward scanning and dynamic updates of the chunk limit without relying on prefix max arrays or built-in sorting.

---

- As always, each solution here is extended into a **complete, runnable C program** with `main()` for clarity and local testing.  
📌 **Note:** The original LeetCode problems only require implementing a specific function.
