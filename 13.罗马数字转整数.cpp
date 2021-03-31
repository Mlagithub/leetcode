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
            auto l = flags.find(s[i])->second;
            auto r = flags.find(s[i+1])->second;
            if(l < r)
            {
                sum -= l;
            }
            else{
                sum += l;
            }
        }
        sum += flags.find(s[s.size()-1])->second;
        return sum;
    }
};
// @lc code=end

