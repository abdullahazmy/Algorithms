void selection_sort(vector<int> &nums)
{
    int n = nums.size() - 1;
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (nums[j] < nums[min_idx])
                min_idx = j;
        swap(nums[min_idx], nums[i]);
    }
}
