#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

vector<vector<int> > minAbsDiffPairs(vector<int>& arr)
{
    vector<vector<int> > ans;
    int n = arr.size();
    //sorting the vector
    sort(arr.begin(), arr.end());
    // Stores the minimal absolute difference
    //to use INT_MAX you need to include the climits.h or limits.h
    int minDiff = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        //keep updating the minDiff till you get the least
        minDiff = min(minDiff, abs(arr[i] - arr[i + 1]));
    }
    for (int i = 0; i < n - 1; i++)
    {
        vector<int> pair;
        if (abs(arr[i] - arr[i + 1]) == minDiff)
        {
            pair.push_back(min(arr[i], arr[i + 1]));
            pair.push_back(max(arr[i], arr[i + 1]));
            ans.push_back(pair);
        }
    }
    return ans;
}

int main() {
    vector<int> arr = { 2,5,8,9,10 };
    int N = (sizeof arr) / (sizeof arr[0]);
    vector<vector<int> > pairs = minAbsDiffPairs(arr);
    for (auto v : pairs)
        cout << v[0] << " " << v[1] << endl;

    return 0;
}