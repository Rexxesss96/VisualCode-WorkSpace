/*
 * @lc app=leetcode id=26 lang=java
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start

import java.util.LinkedHashSet;

class Solution {
    public int removeDuplicates(int[] nums) {
        LinkedHashSet<Integer> set = new LinkedHashSet<>();

        for (int num : nums) {
            set.add(num);
        }

        int k = 0;
        for (int num : set) {
            nums[k++] = num;
        }
        return k;
    }
}
// @lc code=end
