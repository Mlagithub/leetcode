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
        unordered_map<std::string, int> flags{
            {"I", 1}, 
            {"V", 5}, 
            {"X", 10}, 
            {"L", 50}, 
            {"C", 100}, 
            {"D", 500}, 
            {"M", 1000},
            {"IV", 4},
            {"IX", 9},
            {"XL", 40},
            {"XC", 90},
            {"CD", 400},
            {"CM", 900}};

        int sum = 0;
        for(int i=0; i < s.size();)
        {
            // case of 2 char
            auto val = flags.find(s.substr(i, 2));
            if(val!=flags.end())
            {
                sum += val->second;
                i+=2;
            }
            // case of 1 char
            else{
                sum += flags.find(s.substr(i, 1))->second;
                ++i;
            }
        }
        return sum;
    }
};
// @lc code=end

