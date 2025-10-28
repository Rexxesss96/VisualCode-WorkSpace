/*
 * @lc app=leetcode id=58 lang=java
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {

    public int lengthOfLastWord(String s) {
        int sLen = s.length() - 1;
        int counter = 0;

        while (sLen >= 0 && s.charAt(sLen) == ' ') {
            sLen--;
        }

        while (sLen >= 0 && s.charAt(sLen) != ' ') {
            counter++;
            sLen--;
        }

        return counter;
    }
}
// @lc code=end

