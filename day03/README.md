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

- `Teemo Attacking`  was a simple simulation problem—solved it very quickly by handling overlaps properly.
- `Assign Cookies`was a clever greedy brain teaser—definitely good for warming up logic and learning how sorting aids minimal satisfaction conditions.
- `Majority Element II`was very challenging. After trying hard, I checked discussions and discovered it uses a modified Boyer-Moore Voting Algorithm. Once I understood it, I implemented the logic myself confidently.
- `Max Candies from Boxes` had an easy core idea, but the **implementation order mattered**. I learned to track opened boxes using a `bool` array and handle cycles or deep chaining (like box 999 unlocking box 998... down to box 0) using a `changed` flag loop — this guaranteed we consumed all reachable boxes and keys.

---

- As always, each solution here is extended into a **complete, runnable C program** with `main()` for clarity and local testing.  
📌 **Note:** The original LeetCode problems only require implementing a specific function.
