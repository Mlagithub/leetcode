/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

#include <vector>
#include <iterator>
using std::vector;

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // last one < 9
        // digits == xxxa, a is in range of [0,8]
        auto len = digits.size();
        if(*digits.rbegin()<9)
        {
            ++digits[len-1];
            return digits;
        }

        // last one > 9
        // digits == xxx9 
        std::vector<int> rst{digits.rbegin(), digits.rend()};

        auto tmp = 1;
        for(int i=0; i<len; ++i)
        {
            rst[i] += tmp;
            if(rst[i]>9)
            {
                tmp = 1;
                rst[i] = 0;
            }
            else
            {
                tmp = 0;
                break;
            }
        }
        if(tmp==1) rst.push_back(1);
        return std::vector<int>(rst.rbegin(), rst.rend());
    }
};
// @lc code=end

