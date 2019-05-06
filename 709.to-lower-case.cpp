/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */
class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.length(); i++) {
            if (int(str[i]) > 64 && int(str[i]) < 91)
            {
                str[i] = str[i] + 32;
            }
        }
        return str;
    }
};

