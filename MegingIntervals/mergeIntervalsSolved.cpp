class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        std::vector<std::vector<int>> test0{intervals[0]};
        for (int i{1};i<intervals.size();i++)
        {
            int lastEnd = test0.back()[1];
            if(intervals[i][0]<=lastEnd)
                test0.back()[1] = std::max(lastEnd,intervals[i][1]);
            else
                test0.push_back(intervals[i]);
        }
        return test0;
    }
};