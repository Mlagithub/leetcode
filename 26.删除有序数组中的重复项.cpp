/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

#include <vector>

using std::vector;


// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1) return 1;
        
        int oldLen = nums.size();
        int begin=0, end=1;

        while (end<oldLen)
        {
            if(nums[end] == nums[begin])
            {
                ++end;
            }
            else
            {
                nums[begin+1] = nums[end];
                ++begin;
                if(end<=begin) end = begin+1;
            }
        }
        return begin+1;
    }
};
// @lc code=end

