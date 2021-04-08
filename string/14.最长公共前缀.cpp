/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <vector>
#include <string>

using std::string;
using std::vector;

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        // strs is empty
        if (strs.empty())
            return "";

        // strs.size() == 1
        if (strs.size() == 1)
            return strs[0];

        auto commStr = strs[0];

        for (auto ithStr = 1; ithStr < strs.size(); ++ithStr)
        {
            auto curStr = strs[ithStr];
            auto curLen = curStr.size();

            if (curLen == 0)
            {
                return "";
            }

            int i = 0;
            for (; i < std::min(commStr.size(), curLen); ++i)
            {
                if (commStr[i] != curStr[i])
                {
                    break;
                }
            }
            commStr = commStr.substr(0, i);
            if (commStr.size() == 0)
            {
                return commStr;
            }
        }
        return commStr;
    }
};
// @lc code=end
