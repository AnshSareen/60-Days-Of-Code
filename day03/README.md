## 📅 Day 3 – LeetCode Problems (03-06-2025)

### 🌟 Daily LeetCode Challenge  
Today’s official challenge:  
🔹 **[Maximum Candies You Can Collect](https://leetcode.com/problems/maximum-candies-you-can-get-from-boxes)**  
✔️ Solved as part of today’s problem set (listed below).

---

### 🧠 Problems Solved: 4

| Problem                                                                                      | Topic                                | Solution File                                           |
|----------------------------------------------------------------------------------------------|--------------------------------------|---------------------------------------------------------|
| [Teemo Attacking](https://leetcode.com/problems/teemo-attacking)                             | Arrays, Simulation                   | [Teemo_Attacking.c](Teemo_Attacking.c)                 |
| [Assign Cookies](https://leetcode.com/problems/assign-cookies)                               | Greedy, Sorting                      | [Assign_Cookies.c](Assign_Cookies.c)                   |
| [Majority Element II](https://leetcode.com/problems/majority-element-ii)                     | Hashing, Boyer-Moore Voting          | [Majority_ElementII.c](Majority_ElementII.c)           |
| [Maximum Candies You Can Collect](https://leetcode.com/problems/maximum-candies-you-can-get-from-boxes) | Graphs, BFS-like Simulation | [Max_Candies_from_Boxes.c](Max_Candies_from_Boxes.c)   |

---

### 📘 Notes & Learnings

- `Teemo Attacking` was a simple simulation problem—solved it quickly by accounting for time overlaps.
- `Assign Cookies` was a great greedy brain teaser—sorting both arrays really helped simplify logic.
- `Majority Element II` was **tough**. After multiple attempts, I learned it requires a modified **Boyer-Moore Voting Algorithm**. Once understood, I rewrote it myself.
- `Max Candies from Boxes` was an intuitive implementation puzzle. Tracking opened boxes, collected keys, and looping with a `changed` flag helped ensure no box was missed — especially in edge cases with nested keys like box 999 down to 0.

---

- As always, each solution here is extended into a **complete, runnable C program** with `main()` for clarity and local testing.  
📌 **Note:** The original LeetCode problems only require implementing a specific function.
