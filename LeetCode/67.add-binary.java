/*
 * @lc app=leetcode id=67 lang=java
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
    public String addBinary(String a, String b) {

        int carry = 0;
        int left = a.length() - 1;
        int right = b.length() - 1;
        StringBuilder result = new StringBuilder();

        while (left >= 0 || right >= 0 || carry == 1) {
            if (left >= 0)
                carry += a.charAt(left--) - '0';
            if (right >= 0)
                carry += b.charAt(right--) - '0';
            result.append(carry % 2);
            carry /= 2;
        }
        return result.reverse().toString();

        /*
         * int left = a.length() - 1;
         * int right = b.length() - 1;
         * int carry = 0;
         * StringBuilder result = new StringBuilder();
         * 
         * while (left >= 0 || right >= 0 || carry != 0) {
         * int bitA = (left >= 0) ? a.charAt(left) - '0' : 0;
         * int bitB = (right >= 0) ? b.charAt(right) - '0' : 0;
         * 
         * int sum = bitA + bitB + carry;
         * 
         * result.append((char) (sum % 2 + '0'));
         * 
         * carry = sum / 2;
         * 
         * left--;
         * right--;
         * }
         * 
         * return result.reverse().toString();
         */

        /*
         * int left = a.length() - 1;
         * int right = b.length() - 1;
         * int carry = 0;
         * StringBuilder result = new StringBuilder();
         * 
         * while (left >= 0 || right >= 0 || carry != 0) {
         * int bitA = (left >= 0) ? a.charAt(left) - '0' : 0;
         * int bitB = (right >= 0) ? b.charAt(right) - '0' : 0;
         * 
         * int sum = bitA + bitB + carry;
         * 
         * if (sum == 0) {
         * result.append('0');
         * carry = 0;
         * } else if (sum == 1) {
         * result.append('1');
         * carry = 0;
         * } else if (sum == 2) {
         * result.append('0');
         * carry = 1;
         * } else {
         * result.append('1');
         * carry = 1;
         * }
         * 
         * left--;
         * right--;
         * }
         * 
         * return result.reverse().toString();
         */
    }
}
// @lc code=end
