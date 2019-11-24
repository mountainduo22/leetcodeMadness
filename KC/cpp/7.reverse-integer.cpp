/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)
public:
    int reverse(int x)
    {
        int result = 0, lastDigit;
        while (x != 0)
        {
            lastDigit = x % 10;
            if (result > (INT_MAX) / 10 || result < INT_MIN / 10)
            {
                return 0;
            }
            result = result * 10 + lastDigit;
            x /= 10;
        }

        return result;
    }
};
// @lc code=end
