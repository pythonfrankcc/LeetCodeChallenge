class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = 0;
        int maxElement = *max_element(nums.begin(), nums.end());
        if (maxElement < 0)
            return maxElement;
        for (int i = 0; i < n; i++)
        {
            //int maxSum = nums[i];
            int currSum = 0;
            for (int j = i; j < n; j++)
            {
                currSum += nums[j];
                if (currSum > maxSum)
                {
                    maxSum = currSum;
                }
            }
        }
        return maxSum;
    }
};