/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int rst = 0;
        for(int i=1; i<prices.size(); ++i)
        {
            rst = std::max(rst, prices[i]-minPrice);
            minPrice = std::min(minPrice, prices[i]);
            // if(minPrice>prices[i]) minPrice = prices[i];
            // else
            // {
            //     auto cur = prices[i] - minPrice;
            //     if(rst<cur) rst = cur;
            // }
        }
        return rst;
    }
};
// @lc code=end

