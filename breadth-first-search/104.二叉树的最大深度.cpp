/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <queue>

class Solution {
public:
    int maxDepth(TreeNode* root) {
        /* depth-first-search
        // empty
        if(root==nullptr) return 0;
        return std::max(maxDepth(root->left), maxDepth(root->right))+1;
        */

        // breadth-first-search
        // empty
        if(root == nullptr) return 0;

        std::queue<TreeNode*> q;
        q.push(root);
        int rst = 0;
        while (!q.empty())
        {
            int len = q.size();
            while (len>0)
            {
                auto tmp = q.front();
                q.pop();
                if(tmp->left!=nullptr) q.push(tmp->left);
                if(tmp->right!=nullptr) q.push(tmp->right);
                --len;
            }
            ++rst;
        }
        return rst;
    }
};
// @lc code=end

