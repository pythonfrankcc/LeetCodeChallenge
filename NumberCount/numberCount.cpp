//number count using maps data structure
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::map<int,int> M;
        for (int i{0};i<nums.size(); i++)
        {
            if(M.find(nums[i]) == M.end()) M[nums[i]] = 1;
            else M[nums[i]] +=1;
        }
        for (auto& it : M)
        {
            if (it.second == 1)
                return it.first;
        }
        return 1;
    }
};