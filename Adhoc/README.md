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

[For recap](https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbnRObkFOcHdUMnFoRFFVcjdZV016RGJyZzhXQXxBQ3Jtc0tuSjFTcTNiM1daN1dVYWhfUjdLSWVBbDZtelFDb2otdjdZSEJ2WEpJalFTcm84bUJHMEFma0hGX1I0M0NPdmJjVHkxandGbEhaNEthNExtMlRwLWY2REh1NngyU2lHUVBLdTFWaHk2V3Q0NkVrTG9TYw&q=https%3A%2F%2Fwww.canva.com%2Fdesign%2FDAGSKPs7xNc%2FEs_9X9NoZ0oQMreNCziPHA%2Fview%3Futm_content%3DDAGSKPs7xNc%26utm_campaign%3Ddesignshare%26utm_medium%3Dlink%26utm_source%3Deditor&v=i4A7HG4bGic)
