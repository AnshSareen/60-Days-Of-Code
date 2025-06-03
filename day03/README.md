## 📅 Day 3 – LeetCode Problems (03-06-2025)

### 🧠 Problems Solved: 4

| Problem                                                                                      | Topic                                | Solution File                                           |
|----------------------------------------------------------------------------------------------|--------------------------------------|---------------------------------------------------------|
| [Teemo Attacking](https://leetcode.com/problems/teemo-attacking)                             | Arrays, Simulation                   | [Teemo_Attacking.c](Teemo_Attacking.c)                 |
| [Assign Cookies](https://leetcode.com/problems/assign-cookies)                               | Greedy, Sorting                      | [Assign_Cookies.c](Assign_Cookies.c)                   |
| [Majority Element II](https://leetcode.com/problems/majority-element-ii)                     | Hashing, Boyer-Moore Voting          | [Majority_ElementII.c](Majority_ElementII.c)           |
| [Maximum Candies You Can Collect](https://leetcode.com/problems/maximum-candies-you-can-get-from-boxes) | Graphs, BFS-like Simulation | [Max_Candies_from_Boxes.c](Max_Candies_from_Boxes.c)   |

### 📘 Notes & Learnings

- `Teemo Attacking` was a simple simulation problem—solved it very quickly by handling overlaps properly.
- `Assign Cookies` was a clever greedy brain teaser—definitely good for warming up logic and learning how sorting aids minimal satisfaction conditions.
- `Majority Element II` was **very challenging**. After trying hard, I checked discussions and discovered it uses a **modified Boyer-Moore Voting Algorithm**. Once I understood it, I implemented the logic myself confidently.
- `Max Candies from Boxes` had an intuitive approach, but required careful thinking. Using arrays to track opened boxes and collected keys made it manageable. The `changed` flag was important to make sure we loop until no new boxes are opened—especially in edge cases like nested keys from box 999 to 0.

---

> As always, each solution here is extended into a **complete, runnable C program** with `main()` for clarity and local testing.
> 📌 **Note:** The original LeetCode problems only require implementing a specific function.
