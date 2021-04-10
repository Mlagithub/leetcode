/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

#include <string>

using std::string;

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        std::string rst;
        switch (n)
        {
        case 1:
            return "1";
            break;
        case 2:
            return "11";
            break;
        case 3:
            return "21";
            break;
        case 4:
            return "1211";
            break;
        default:
            auto preRst = countAndSay(n-1);
            auto curChar = preRst[0];
            int n = 1;
            for (auto i = 1; i < preRst.size();++i)
            {
                if(preRst[i] == curChar)
                {
                    ++n;
                }
                else
                {
                    rst += (std::to_string(n) + curChar);
                    curChar = preRst[i];
                    n = 1;
                }
                if(i==preRst.size()-1)
                {
                    rst += (std::to_string(n) + curChar);
                }
            }
            break;
        }

        return rst;
    }
};
// @lc code=end

