/*
 * @lc app=leetcode id=9 lang=java
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
    public boolean isPalindrome(int x) {
        return ((String.valueOf(x)).equals(new StringBuilder(String.valueOf(x)).reverse().toString()));
    }
}
// @lc code=end
