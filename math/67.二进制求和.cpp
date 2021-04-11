/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

#include <string>

using std::string;

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        std::string rst;
        char left, right, prev = '0';
        for(auto it = a.rbegin(), jt = b.rbegin(); it != a.rend()|| jt!=b.rend();)
        {
            left = it==a.rend() ? '0' : (++it, *(it-1));
            right = jt==b.rend() ? '0' : (++jt, *(jt-1));

            auto tmp = static_cast<int>(left) + static_cast<int>(right) + static_cast<int>(prev);
            
            switch (tmp)
            {
            case 3*49: // 1 + 1 + 1
                prev = '1';
                rst += '1';
                break;
            case 2*49+48: // 1 + 1 + 0
                prev = '1';
                rst += '0';
                break;
            case 49+2*48: // 1 + 0 + 0
                prev = '0';
                rst += '1';
                break;      
            case 3*48:  // 0 + 0 + 0
                prev = '0';
                rst += '0';
                break;
            default:
                break;
            }
        }
        if(prev=='1') rst += '1';
        return std::string(std::rbegin(rst), std::rend(rst));
    }
};
// @lc code=end

