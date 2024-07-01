### Sorting Algorithms


> Comparison Sort vs Count Sort
-  Comparison sort is O(N) or O(NlogN)  -> like INsertion Sort, selection sort
-  Count Sort depends on the frequency


The [insertion sort](https://github.com/abdullahazmy/Algorithms/blob/main/sorting-algo/insertion_sort.cpp) algorithm, is faster than the [selection sort](https://github.com/abdullahazmy/Algorithms/blob/main/sorting-algo/selcection_sort.cpp)
  both of them takes a time complexity of O(N^2) but the insertion sort at the best case is O(N), while in the selection is also O(N^2)

- As the selection sort doesn't depend on test cases, it will always work with the nested loops, while in the insertion sort
It will work in the nested loop in case of worst case

- The complexity of [Count Sort](https://github.com/abdullahazmy/Algorithms/blob/main/sorting-algo/countSort.cpp) is  
always o(mxVal) + o(n) at both worst & best case

---

##### Good ideas to know

When trying to make the frequncy array to sort an array with CountSort Algo, we should use this way to treat [Negative Vals](https://github.com/abdullahazmy/Algorithms/blob/main/sorting-algo/countSort-negativeVALs.cpp)

To handle negative numbers, you can modify the algorithm to shift the entire range of input numbers so that all numbers are non-negative. Here's how you can modify the code to handle both negative and positive integers:

Find the minimum and maximum elements in the array.
Shift the array elements to be non-negative.
Apply the counting sort.
Shift the sorted array elements back to their original values.
