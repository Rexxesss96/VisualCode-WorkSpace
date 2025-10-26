/*
 * @lc app=leetcode id=1 lang=java
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> mappa = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complemento = target - nums[i];
            if (mappa.containsKey(complemento)) {
                return new int[] { mappa.get(complemento), i };
            }
            mappa.put(nums[i], i);
        }
        return new int[] {};
    }
}
// @lc code=end
