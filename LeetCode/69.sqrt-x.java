/*
 * @lc app=leetcode id=69 lang=java
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {

    public int mySqrt(int x) {
        if (x < 2)
            return x;

        long r = x;
        while (r * r > x) {
            r = (r + x / r) / 2;
        }
        return (int) r;

        /* 
        if (x < 2)
            return x;
        
        int left = 1;
        int right = x / 2;
        int result = 0;
        
        while (left <= right) {
            int midPoint = left + (right - left) / 2;
            long square = (long) midPoint * midPoint;
        
            if (square == x) {
                return midPoint;
            } else if (square < x) {
                result = midPoint;
                left = midPoint + 1;
            } else {
                right = midPoint - 1;
            }
        }
        
        return result;
        */

        /* 
        int mid = (x / 2) + 1;
        long square = 0;
        
        for (int i = 0; i <= mid; i++) {
            square = (long) i * i;
            if (square == x) {
                return i;
            } else if (square > x) {
                return i - 1;
            }
        }
        return -1;
         */
    }
}
// @lc code=end
