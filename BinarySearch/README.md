## Some tricky notes

> The Array should be sorted, don't forget.

1. If we use the formula `(left + right) / 2` to calculate the middle index, it will overflow for large scales
2. To solve the issue we use the formula `left + (right - left) / 2`

---

The [lower_bound](https://github.com/abdullahazmy/Algorithms/blob/main/BinarySearch/BS-stls.cpp) is used to get the first idx >= the target

while the upper_bound is used to get the first idx > the target


---

> [!NOTE]
> **Monotonic function** the function which is either entirely non-increasing, or entirely non-decreasing.
