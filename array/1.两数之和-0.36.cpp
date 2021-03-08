/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> rst(2);
        // if(nums.size()==2) {
        //     rst[0] = 0;
        //     rst[1] = 1;
        //     return rst;
        // }
        for(int i = 0;  i < nums.size(); ++i)
        {
            for(int j = i+1;  j < nums.size(); ++j)
            {
                auto lhs = nums[i];
                auto rhs = nums[j];
                if(lhs + rhs == target)
                {
                    rst[0] = i;
                    rst[1] = j;
                    break;
                }
            }
        }
        return rst;
    }
};
// @lc code=end

