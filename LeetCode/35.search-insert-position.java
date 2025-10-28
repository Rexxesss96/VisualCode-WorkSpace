/*
 * @lc app=leetcode id=35 lang=java
 *
 * [35] Search Insert Position
 */

// @lc code=start

class Solution {

    public int searchInsert(int[] nums, int target) {
        return binarySearch(nums, target, 0, nums.length - 1);
    }

    private int binarySearch (int nums[], int target, int left, int right) {
        if (left > right) {
            return left;
        }

        int midPoint = left + (right - left) / 2;
        
        if (nums[midPoint] == target) {
            return midPoint;
        } else if (nums[midPoint] > target) {
            return binarySearch(nums, target, left, midPoint - 1);
        } else {
            return binarySearch(nums, target, midPoint + 1, right);
        }
    }

}
// @lc code=end

