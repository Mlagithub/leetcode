/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */
#include <vector>

using std::vector;

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int preMinPrice = prices[0], preMaxPrice=prices[0];
        int pre = prices[0];

        int rst = 0;
        for(int i=1; i<prices.size(); ++i)
        {
            auto cur = prices[i];
            if(cur < pre)
            {
                rst += preMaxPrice-preMinPrice;
                preMinPrice = preMaxPrice = cur;
            }
            else
            {
                preMaxPrice = cur;
            }
            pre = cur;
        }
        rst += preMaxPrice - preMinPrice;
        return rst ;

    }
};
// @lc code=end

