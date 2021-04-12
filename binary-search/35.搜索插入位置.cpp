/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

#include <vector>
using std::vector;

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // empty
        if(nums.empty()) return 0;
        
        int mid, left = 0, right = nums.size(); 
        int rst = 0;

        while (left <= right)
        {
            mid = (left + right) / 2;
            if (mid == left || mid == right)
            {
                if (target > nums[left])
                {
                    rst = right;
                    break;
                }
                else
                {
                    rst = left;
                    break;
                }
            }
            // target locate left
            if(target <= nums[mid])
            {
                right = mid;
            }
            else 
            {
                left = mid;
            }
        }
        return rst;
    }
};
// @lc code=end

