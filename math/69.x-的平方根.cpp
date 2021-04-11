/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;

        long left = 1, right = x, mid;
        while(left < right)
        {
            mid = (left + right)/2;
            if(mid==left || mid == right) break;
            if(mid*mid>x)
            {
                right = mid;
            }
            else
            {
                left = mid;
            }
        }
        return mid;
    }
};
// @lc code=end

