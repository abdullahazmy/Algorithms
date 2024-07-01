#include <vector>
#include <algorithm> // for std::swap
using namespace std;

class Solution
{
private:
    pair<int, int> findMinMax(const vector<int>& nums)
    {
        int mn = nums[0], mx = nums[0];
        for (int num : nums)
        {
            if (num < mn) mn = num;
            if (num > mx) mx = num;
        }
        return {mn, mx};
    }

    void countSort(vector<int>& nums)
    {
        auto [mn, mx] = findMinMax(nums);
        int offset = -mn; // Make all elements non-negative
        int range = mx - mn + 1;
        
        vector<int> count(range, 0);
        for (int num : nums)
        {
            count[num + offset]++;
        }
        
        int idx = 0;
        for (int i = 0; i < range; ++i)
        {
            while (count[i] > 0)
            {
                nums[idx++] = i - offset;
                count[i]--;
            }
        }
    }

public:
    vector<int> sortArray(vector<int>& nums)
    {
        countSort(nums);
        return nums;
    }
};
