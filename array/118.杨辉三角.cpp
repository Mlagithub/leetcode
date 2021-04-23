/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        if(numRows==1) return {{1}};
        if(numRows==1) return {{1},{1,1}};
        std::vector<std::vector<int>> rst(numRows);
        rst[0] = { 1 };
        rst[1] = { 1, 1 };
        for (int i = 2; i < numRows; ++i)
        {
            std::vector<int> curRow(i + 1, 1);
            for (int j = 1; j < i; ++j)
            {
                curRow[j] = rst[i - 1][j - 1] + rst[i - 1][j];
            }
            rst[i] = curRow;
        }
        return rst;
    }
};
// @lc code=end
