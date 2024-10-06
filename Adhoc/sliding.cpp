class Solution {
public:
	double findMaxAverage(vector<int>& nums, int k) 
	{
		int n = nums.size();
		double sum = 0;
		for (int i = 0; i <= k - 1; i++)
			sum += nums[i];
		int l = 0, r = k - 1;
		double max_sum = sum;
		double max_avg = sum / k;
		while (r < n)
		{
			max_sum = max_sum > sum ? max_sum : sum;
			max_avg = max_sum / k;
			sum -= nums[l];
			if (r + 1 < n)
			{
				sum += nums[r + 1];
			}

			l++, r++;
		}

		return max_avg;
	}
};
