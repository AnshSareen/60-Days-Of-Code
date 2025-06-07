## 📅 Day 7 – LeetCode Problems (07-06-2025)

### 🌟 Daily LeetCode Challenge  
Today’s official challenge:  
🔹 **[3170. Lexicographically Minimum String After Removing Stars](https://leetcode.com/problems/lexicographically-minimum-string-after-removing-stars/)**  
✔️ Solved as part of today’s problem set (listed below).

---

### 📋 Problems Solved

| # | Problem Title | Solution File |
|---|---------------|----------------|
| 1 | [Lexicographically Minimum String After Removing Stars](https://leetcode.com/problems/lexicographically-minimum-string-after-removing-stars/) | [`lexicographical_star_removal.c`](lexicographical_star_removal.c) |

---

### 🧠 Learnings & Notes

Today’s main challenge was **3170. Lexicographically Minimum String After Removing Stars**. I brainstormed extensively to optimize the problem using different data structures to reduce time complexity. This problem was trickier than it initially appeared because simply using one stack was not sufficient to maintain lexicographical ordering.

To handle this, I implemented the solution using **26 stacks**—one for each lowercase alphabet character. This allowed precise tracking of character positions and enabled removal of the correct characters when a `*` was encountered. The idea was:

- Traverse the string and for each letter, push its index onto the corresponding character stack.
- Upon encountering a `*`, find the lexicographically smallest non-empty stack and mark both that character and the `*` for removal.
- Finally, construct the resulting string by skipping the marked characters.

Memory was dynamically managed for each stack and the `remove` array to maintain clarity and efficiency. This method ensures accurate deletions while preserving optimal lexicographical order.

🔁 In the future, I aim to reimplement this using a **priority queue (min-heap)** once I revise core DSA concepts more thoroughly.

---

- As always, each solution here is extended into a **complete, runnable C program** with `main()` for clarity and local testing.  
📌 **Note:** The original LeetCode problems only require implementing a specific function.


