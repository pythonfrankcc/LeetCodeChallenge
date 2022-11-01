#include <algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = 0, i = 0, vectorLength = nums.size();
        if (vectorLength == 1)
            return *max_element(nums.begin(), nums.end());
        //if (vectorLength == 2)
          //  return *max_element(nums.begin(), nums.end());
        else
        {
            for(;i<vectorLength;i++)
            {
                int currSum = nums[i];
                int j = i+1;
                for(;j <vectorLength;j++)
                    {
                        currSum += nums[j];
                        if (currSum>maxSum)
                            maxSum = currSum;
                    }
            }
        return maxSum;
        }
    }
};