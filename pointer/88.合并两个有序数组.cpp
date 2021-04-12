/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
#include <vector>
using std::vector;

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // nums2 is empty
        if(n==0) return;

        int i=m-1, j=n-1, cur, id=m+n-1;

        while(i>=0 || j>=0)
        {
            if(i==-1){
                cur = nums2[j--]; 
            }
            else if(j==-1)
            {
                cur = nums1[i--];
            }
            else if(nums1[i] > nums2[j])
            {
                cur = nums1[i--];
            }
            else{
                cur = nums2[j--];
            }
            nums1[id--] = cur;
        }
    }
};
// @lc code=end

