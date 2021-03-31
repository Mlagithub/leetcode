/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

#include <numeric>

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int rcv = 0;
        while(x!=0)
        {
            int pop = x % 10;
            x /= 10;
            if(rcv > INT_MAX/10 || (rcv==INT_MAX/10 && pop > 7)) return 0;
            if(rcv < INT_MIN/10 || (rcv==INT_MIN/10 && pop < -8)) return 0;
            rcv = rcv * 10 + pop;
        }
        return rcv;
    }
};
// @lc code=end

