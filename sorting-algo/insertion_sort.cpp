void insertion_sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)  // i starts from 1 and goes up to n-1
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key)  // Corrected condition: j >= 0 should be checked first
        {
            // Right Shift for nums[i]
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;  // Insert key at the correct position
    }
}
