/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

#include <string>
#include <unordered_map>
using namespace std;

// @lc code=start
class Solution {
public:

    int romanToInt(string s) {
        unordered_map<char, int> flags{
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50}, 
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}};

        int sum = 0;
        for(int i=0; i < s.size()-1;++i)
        {
            // case 
            auto l = this->charToInt(s[i]);
            auto r = this->charToInt(s[i+1]);
            if(l < r)
            {
                sum -= l;
            }
            else{
                sum += l;
            }
        }
        sum += this->charToInt(s[s.size()-1]);
        return sum;
    }


    int charToInt(const char c)
    {
        int rst = 0;
        switch (c)
        {
        case 'I':
            rst = 1;
            break;
        case 'V':
            rst = 5;
            break;
        case 'X':
            rst = 10;
            break;
        case 'L':
            rst = 50;
            break;
        case 'C':
            rst = 100;
            break;
        case 'D':
            rst = 500;
            break;
        case 'M':
            rst = 1000;
            break;
        default:
            break;
        }
        return rst;
    }
};
// @lc code=end

