#include <algorithm>
class Solution {
public:
    int firstUniqChar(string s) {
        for(int i{0};i<s.size();i++)
        {
            int counter = count(s.begin(),s.end(),s[i]);
            if (counter == 1) {return i;}
        }
        return -1;
        
    }
};

class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char,int> m;
        for(int i=0; i <= s.size(); i++) 
        {
        m[s[i]]++;
        // storing the number of times the character occured in the string
        }
        for(int i=0; i<s.size(); i++)
        {
        if(m[s[i]] == 1) 
        {
            return i;
        }
        }
        return -1;
    }
}