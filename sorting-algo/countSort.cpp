#include <vector>
#include <algorithm> // for std::swap
using namespace std;

class Solution
{
private:
    int maxEl(const vector<int>& nums)
    {
        int mx = nums[0];
        for (int num : nums)
        {
            if (num > mx)
                mx = num;
        }
        return mx;
    }

    vector<int> freq(const vector<int>& nums)
    {
        vector<int> vc(maxEl(nums) + 1, 0);
        for (int num : nums)
            vc[num] += 1;
        return vc;
    }

    void countSort(vector<int>& nums)
    {
        int mx = maxEl(nums);
        vector<int> count = freq(nums);
        int idx = 0;
        for (int i = 0; i <= mx; i++)
        {
            while (count[i] > 0)
            {
                nums[idx++] = i;
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
