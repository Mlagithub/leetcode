/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

#include <vector>

using std::vector;

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // only one element
        auto len = nums.size();
        if(len==1) return nums[0];

        int sum = nums[0];
        int rst = sum;
        
        // more then one
        for(auto i = 1; i < len; ++i)
        {
            if(sum>0) sum += nums[i];
            else sum = nums[i];
            if(rst < sum) rst = sum;
        }
        return rst;
    }
};
// @lc code=end

