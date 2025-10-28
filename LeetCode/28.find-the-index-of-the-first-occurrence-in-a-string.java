/*
 * @lc app=leetcode id=28 lang=java
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
    public int strStr(String haystack, String needle) {
        int first = haystack.length();
        int second = needle.length();

        for (int i = 0; i <= first - second; i++) {
            int pointer = 0;
            while (pointer < second && haystack.charAt(i + pointer) == needle.charAt(pointer)) {
                pointer++;
            }
            if (pointer == second) {
                return i;
            }
        }
        return -1;
    }
}
// @lc code=end