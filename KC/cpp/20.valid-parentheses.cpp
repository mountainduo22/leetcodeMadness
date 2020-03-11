#include <iostream>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        if (s.size() == 0)
        {
            return true;
        }

        if (s.size() < 2)
        {
            return false;
        }

        map<char, char> bracketPairs = {
            {']', '['},
            {'}', '{'},
            {')', '('}};

        vector<char> brackets;
        int closingBracketCounter = 0;

        for (char bracket : s)
        {
            if (bracket == '(' || bracket == '{' || bracket == '[')
            {
                brackets.push_back(bracket);
                continue;
            }

            if (bracketPairs.find(bracket) != bracketPairs.end())
            {
                if (brackets.size() == 0 || bracketPairs[bracket] != brackets[brackets.size() - 1])
                {
                    return false;
                }
                closingBracketCounter++;
                brackets.pop_back();
            }
        }
        if (closingBracketCounter == 0 || brackets.size() > 0)
        {
            return false;
        }
        return true;
    }
};
// @lc code=end
int main(int argc, const char **argv)
{
    Solution leetcodeSolution;
    string testString = "()";

    leetcodeSolution.isValid(testString);
    return 0;
}