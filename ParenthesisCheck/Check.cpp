/*
Algorithm behind it
1)Check if the stack is empty and if is empty push the element s[i]
2)if the algos is not empty check that the current char is a closing bracket,
    if it is check the top and if they match pop it
    if it is not just add it on top of the stack
3) if none of the above just add the char

4) check whether all the elements have been popped off ad if so return true
    if not return false to indicate unbalanced
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (temp.empty())
            {
                temp.push(s[i]);
            }
            else if((temp.top() == '(' && s[i] == ')')
                   ||(temp.top() == '{' && s[i] == '}')
                   ||(temp.top() == '[' && s[i] == ']'))
            {
                temp.pop();
            }
            else
            {
                temp.push(s[i]);
            }
        }
        if(temp.empty()) return true;
        return false;
    }
};