## 📅 Day 6 – LeetCode Problems (06-06-2025)

### 🌟 Daily LeetCode Challenge  
Today’s official challenge:  
🔹 **[Using a Robot to Print the Lexicographically Smallest String](https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/)**  
✔️ Solved as part of today’s problem set (listed below).

---

### 🧠 Problems Solved: 1

| Problem                                                                                                      | Topic                        | Solution File                                |
|--------------------------------------------------------------------------------------------------------------|------------------------------|----------------------------------------------|
| [Using a Robot to Print the Lexicographically Smallest String](https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/) | Stack, Greedy, String        | [robot_with_string.c](robot_with_string.c)   |

---

### 📘 Notes & Learnings

- This problem involved simulating a robot that processes characters and prints them in lexicographically smallest order using a **stack**.
- I used a helper array `minFrom[i]` to store the index of the smallest character from position `i` to the end.
- At each step, I greedily pushed characters to a stack until the current minimum was at the top or ready to print.
- The core challenge was managing the condition when to stop pushing and start popping.
- Manual stack operations (push/pop) and understanding character comparison logic were key.

---

- As always, each solution here is extended into a **complete, runnable C program** with `main()` for clarity and local testing.  
📌 **Note:** The original LeetCode problems only require implementing a specific function.

---

🏁 **Personal Milestone**: As of today, I’ve officially solved **50 LeetCode problems in total!**  
This includes practice outside the 60 Days of Code challenge — proud to cross this benchmark! 🚀
