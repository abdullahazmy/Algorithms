/**
 * Performs binary search on a sorted vector to find the index of a target element.
 *
 * @param v The sorted vector to search in.
 * @param target The element to search for.
 * @return The index of the target element if found, -1 otherwise.
 */
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int target)
{
    auto it = lower_bound(v.begin(), v.end(), target); // The first idx >= target
    if (it != v.end() && *it == target)
        return it - v.begin();
    return -1; // target not found
}
