/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

#include <string>

using std::string;

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        if(haystack.empty()) return -1;

        for(int i=0, j=0; i < needle.size(),j<haystack.size(); ++j)
        {
            if (haystack[j] == needle[i])
            {
                if (i == (needle.size() - 1))
                {
                    return j - i;
                }
                ++i;
            } else
            {
                if (i > 0)
                {
                    j -= i;
                    i = 0;
                }
            }
        }
        return -1;
    }
};
// @lc code=end

