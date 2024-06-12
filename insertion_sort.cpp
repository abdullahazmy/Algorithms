void insertion_sort(vector<int> &nums)
{
    for (int i = 1; i < (int)nums.size(); i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (nums[j] > key && j >= 0)
        {
            // Right Shifting for elements that are more than nums[i]
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key; // Now return the overridn elemnt to it's position
    }
}

// Takes complexity of O(n^2)
