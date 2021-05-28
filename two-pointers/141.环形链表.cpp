/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <map>
#include <unordered_set>

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return false;
        auto slow = head;
        auto quick = head->next;
        while(slow!=quick)
        {
            if(quick == nullptr || quick->next==nullptr)
            {
                return false;
            }
            slow = slow->next;
            quick = quick->next->next;
        }
        return true;
    }
};
// @lc code=end

