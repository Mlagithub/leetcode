/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start

#include <vector>
#include <string>
#include <set>
#include <unordered_map>
#include <queue>

using std::set;
using std::queue;
using std::pair;
using std::string;
using std::vector;
using std::unordered_map;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        unordered_map<char, vector<char>> maps = {
            { '2', { 'a', 'b', 'c' } },
            { '3', { 'd', 'e', 'f' } },
            { '4', { 'g', 'h', 'i' } },
            { '5', { 'j', 'k', 'l' } },
            { '6', { 'm', 'n', 'o' } },
            { '7', { 'p', 'q', 'r', 's' } },
            { '8', { 't', 'u', 'v' } },
            { '9', { 'w', 'x', 'y', 'z' } }
        };

        queue<string> digitQueue;
        for(auto it : maps[digits[0]]) digitQueue.push(string{it});
        
        for(int i=1; i<digits.size(); ++i)
        {
            int n = digitQueue.size();
            for(int j=0; j<n; ++j)
            {
                auto str = digitQueue.front();
                for(auto jt : maps[digits[i]])
                {
                    digitQueue.push(str+jt);
                }
                digitQueue.pop();
            }
        }

        vector<string> rst;
        {
            while (!digitQueue.empty())
            {
                rst.push_back(digitQueue.front());
                digitQueue.pop();
            }
        }

        return rst;
    }
};
// @lc code=end

