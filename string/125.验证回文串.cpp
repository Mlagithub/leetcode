/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

#include <string>
using std::string;

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        int i=0, j=s.size()-1;
        while (i<j)
        {
            while (!std::isalnum(s[i]) && i<s.size()-1)
            {
                ++i;
            }
            while (!std::isalnum(s[j]) && j>0)
            {
                --j;
            }
            if(i>j) return true;
            if(std::toupper(s[i]) != std::toupper(s[j])) return false;
            ++i;
            --j;
        }
        return true;
    }
};
// @lc code=end

