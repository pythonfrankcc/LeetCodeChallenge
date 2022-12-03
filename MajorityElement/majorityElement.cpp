class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int,int> M;
        for (int i{0}; i<nums.size();i++)
        {
            if (M.find(nums[i]) == M.end()) M[nums[i]] =1;
            else M[nums[i]] += 1;
        }
        for(auto& it:M)
        {
            if(it.second >(nums.size()/2))
                return it.first;
        }
        return 1;
    }
};