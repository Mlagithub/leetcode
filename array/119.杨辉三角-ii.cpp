/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        if(rowIndex==1) return vector<int>(2,1);
        std::vector<int> rst(rowIndex+1,1);
        for(int i=2; i<= rowIndex; ++i)
        {
            auto left = rst[0];
            auto right = rst[1];
            for(int j=1; j<i; ++j)
            {
                auto tmp = rst[j];
                rst[j] = left+right;
                right = rst[j+1];
                left = tmp;
            }
        }
        return rst;
    }
};
// @lc code=end

