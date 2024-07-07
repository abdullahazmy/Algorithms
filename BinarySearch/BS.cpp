int binarySearch(vector<int> &v, int target)
{
    int left = 0, right = v.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (v[mid] == target)
            return mid;
        if (target < v[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1; // target not found
}
