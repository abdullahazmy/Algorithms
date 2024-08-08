# Dynamic Programming

## What differs Topbottm from Bottom up?

The main difference between the top-down and bottom-up approaches in dynamic programming is the order in which the subproblems are solved.

In the top-down approach, also known as memoization, we start with the original problem and break it down into smaller subproblems. We then solve these subproblems recursively, storing the results in a memoization table to avoid redundant calculations. This approach is more intuitive and easier to implement, but it may have a higher overhead due to the recursive calls.

On the other hand, the bottom-up approach starts with the smallest subproblems and builds up to the original problem. We solve the subproblems in a systematic manner, usually using a table or an array to store the intermediate results. This approach is more efficient in terms of time and space complexity, as it avoids the overhead of recursive calls. However, it may be less intuitive and harder to implement compared to the top-down approach.

Both approaches can be used to solve dynamic programming problems, and the choice between them depends on the specific problem and the trade-offs between time complexity and implementation complexity.

### When to use Top-Down (Memoization) Approach:

- Use the top-down approach when the problem can be easily divided into smaller subproblems.
- Use it when there are overlapping subproblems, as memoization helps avoid redundant calculations.
- It is suitable when the recursive structure of the problem is more intuitive and easier to understand.
- Use it when the time complexity of the top-down approach is acceptable for the problem at hand.

### When to use Bottom-Up (Tabulation) Approach:

- Use the bottom-up approach when the problem can be solved by iteratively solving smaller subproblems.
- Use it when there are no overlapping subproblems, as tabulation eliminates the need for memoization.
- It is suitable when the iterative structure of the problem is more efficient in terms of time and space complexity.
- Use it when the time complexity of the bottom-up approach is preferable over the top-down approach.

## Remember, the choice between the top-down and bottom-up approaches depends on the problem's characteristics, such as its recursive or iterative nature, overlapping subproblems, and the trade-offs between time complexity and implementation complexity.
