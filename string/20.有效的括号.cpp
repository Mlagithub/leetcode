/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <string>
#include <unordered_map>

using std::string;

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        std::string stk;
        // stk.reserve(1e4);

        if(s.empty()) return true;
        if(s.size()==1) return false;

        char topChar;
        int len = 0;

        std::unordered_map<char, char> flags{{')','('}, {']','['}, {'}','{'}};

        for(auto ithChar : s)
        {
            switch (ithChar)
            {
            case '(':
            case '[':
            case '{':
                stk.push_back(ithChar);
                topChar = ithChar;
                ++len;
                break;
            case ')':
            case ']':
            case '}':
                if(stk.empty() || topChar!=flags[ithChar]) 
                { 
                    return false;
                }
                stk.pop_back();
                --len;
                topChar = len<1 ? ' ' : stk[len-1];
                break;
            default:
                break;
            }
        }
        return stk.empty() ? true : false;
    }
};
// @lc code=end

