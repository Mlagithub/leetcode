/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

#include <string>

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x <= 9) return true;
        auto str = std::to_string(x);
        int lhs = 0, rhs=str.size()-1;
        while (lhs < rhs) 
        {
            if(str[lhs]!=str[rhs]) return false;
            ++lhs;
            --rhs;
        }
        return true;
    }
};
// @lc code=end

