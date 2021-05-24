/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

#include <vector>
#include <unordered_map>
#include <unordered_set>

using std::vector;

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rst = 0;
        for(auto it : nums)
        {
            rst ^= it;
        }
        return rst;
    }
};
// @lc code=end

