/*
 * @lc app=leetcode id=88 lang=java
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {

    public void merge(int[] nums1, int m, int[] nums2, int n) {

        //Merge in-place con due puntatori + spostamenti
        int i = 0, j = 0;
        while (j < n) {
            if (i >= m + j || nums1[i] > nums2[j]) {
                // sposta nums1[i..m+j-1] avanti di 1
                System.arraycopy(nums1, i, nums1, i + 1, m + j - i);
                nums1[i] = nums2[j];
                j++;
            }
            i++;
        }

        /* 
        //Uso array ausiliario
        int[] temp = new int[m + n];
        int i = 0, j = 0, k = 0;
        
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j])
                temp[k++] = nums1[i++];
            else
                temp[k++] = nums2[j++];
        }
        
        while (i < m)
            temp[k++] = nums1[i++];
        while (j < n)
            temp[k++] = nums2[j++];
        
        System.arraycopy(temp, 0, nums1, 0, m + n);
         */

        /* 
        //Soluzione più efficiente
        int k = m + n - 1;
        
        if (n != 0) {
            while (m > 0 && n > 0) {
                if (nums1[m - 1] > nums2[n - 1]) {
                    nums1[k--] = nums1[m - 1];
                    m--;
                } else {
                    nums1[k--] = nums2[n - 1];
                    n--;
                }
            }
            while (n > 0) {
                nums1[k--] = nums2[n - 1];
                n--;
            }
        }
        */
    }
}
// @lc code=end
