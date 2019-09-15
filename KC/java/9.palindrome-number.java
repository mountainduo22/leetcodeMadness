/*
 * @lc app=leetcode id=9 lang=java
 *
 * [9] Palindrome Number
 */
class Solution {
    public boolean isPalindrome(int x) {

        if (x < 0 || x != 0 && x % 10 == 0) {
            return false;
        }

        return x == palindrome(x, 0);
    }

    private int palindrome(int x, int reverse_number) {
        if (x == 0) {
            return reverse_number;
        }
        
        reverse_number = reverse_number * 10 + x % 10;
        return palindrome(x /= 10, reverse_number);
    }
}
