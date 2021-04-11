/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

#include <string>

using std::string;


// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        bool occurWord = false;
        int len = 0;
        for(int i=s.length()-1; i>=0; --i)
        {
            switch (s[i])
            {
            case ' ':
                if(occurWord) return len;
                break;
            default:
                occurWord = true;
                ++len;
                break;
            }
        }
        return len;
    }
};
// @lc code=end

