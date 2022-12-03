class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
       for (int i{0}; i<nums.size(); i++)
       {
          for (int j{i+1}; j<nums.size();j++)
          {
              for (int k{j+1};k<nums.size(); k++)
              {
                  vector<int> ans;
                  if ((nums[i]+nums[j]+nums[k]) == 0)
                  {
                      ans.emplace_back(nums[i]);
                      ans.emplace_back(nums[j]);
                      ans.emplace_back(nums[k]);
                      //sort the ans before emplacing
                      sort(ans.begin(), ans.end());
                      result.emplace_back(ans);
                  }
              }
          } 
       } 
        //removing duplicates from a vector
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()),result.end() );
        return result;
    }
};