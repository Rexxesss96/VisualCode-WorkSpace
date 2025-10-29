/*
 * @lc app=leetcode id=66 lang=java
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {

    public int[] plusOne(int[] digits) {

        int num = digits.length;

        for (int i = num - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        int result[] = new int[num + 1];
        result[0] = 1;
        return result;
    }
}
// @lc code=end
