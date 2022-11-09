class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int line = 1 ; line <= numRows ; line++ )
        {
            vector<int> lines;
            int value = 1;
            for(int i =1; i<=line; i++)
            {
                lines.push_back(value);
                //updating the value according to binary coefficient
                value = value * (line - i) / i;
            }
            result.push_back(lines);

        }
        return result;
       
    }
};