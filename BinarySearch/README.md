## Some tricky notes

> The Array should be sorted, don't forget.

1. If we use the formula `(left + right) / 2` to calculate the middle index, it will overflow for large scales
2. To solve the issue we use the formula `left + (right - left) / 2`

---
