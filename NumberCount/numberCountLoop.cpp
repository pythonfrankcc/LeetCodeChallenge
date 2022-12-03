class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i{0};i<nums.size();i++)
        {
            int countI = count(nums.begin(),nums.end(),nums[i]);
            if (countI==1)
                return nums[i];
        }
        return 1;
        
    }
};