/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

#include <string>

using std::string;

// @lc code=start
class Solution
{
public:
    string countAndSay(int n)
    {
        std::string rst;

        if (n == 1)
            return "1";
        auto preRst = countAndSay(n - 1);
        int nn = 1;
        for (auto i = 0; i < preRst.size(); ++i)
        {
            auto curChar = preRst[i];
            if (curChar == preRst[i + 1])
            {
                ++nn;
            } else
            {
                rst += std::to_string(nn) + curChar;
                nn = 1;
            }
        }
        return rst;
    }
};
// @lc code=end
