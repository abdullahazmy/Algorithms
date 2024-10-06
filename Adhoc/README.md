# Prefix Sum

Prefix Sum is a common algorithmic technique used to make range query problems more efficient. It involves preprocessing an array to create a new array where each element at index `i` is the sum of the elements from the start of the original array up to `i`.

## How it Works

Given an array `arr` of size `n`, the prefix sum array `prefix` is defined as:

```
prefix[i] = arr[0] + arr[1] + ... + arr[i]
```

This allows us to quickly compute the sum of any subarray `arr[l...r]` using the formula:

```
sum(l, r) = prefix[r] - prefix[l-1]
```

where `prefix[-1]` is considered to be `0`.

## Example in C++

Here is a simple implementation of the prefix sum in C++:

```cpp
#include <iostream>
#include <vector>

std::vector<int> computePrefixSum(const std::vector<int>& arr) {
    std::vector<int> prefix(arr.size(), 0);
    prefix[0] = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

int rangeSum(const std::vector<int>& prefix, int l, int r) {
    if (l == 0) return prefix[r];
    return prefix[r] - prefix[l - 1];
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> prefix = computePrefixSum(arr);

    int l = 1, r = 3;
    std::cout << "Sum of elements from index " << l << " to " << r << " is " << rangeSum(prefix, l, r) << std::endl;

    return 0;
}
```

In this example, the `computePrefixSum` function calculates the prefix sum array, and the `rangeSum` function uses this array to quickly compute the sum of elements between two indices.

## Applications

Prefix Sum is widely used in various applications such as:

- Range sum queries
- Finding equilibrium indices
- Solving problems involving cumulative frequency

By preprocessing the array, prefix sum allows for efficient query operations, making it a powerful tool in algorithm design.

---

[For recap view the animated presentation](https://www.canva.com/design/DAGSKPs7xNc/Es_9X9NoZ0oQMreNCziPHA/view?utm_content=DAGSKPs7xNc&utm_campaign=designshare&utm_medium=link&utm_source=viewer)
