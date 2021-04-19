/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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

struct TreeNode;

class Solution {
public:
    int minDepth(TreeNode* root) {
        // depth-first-search
        /*
        if(root == nullptr) return 0;
        if(root->left == nullptr) return minDepth(root->right)+1;
        if(root->right == nullptr) return minDepth(root->left)+1;
        return std::min(minDepth(root->left), minDepth(root->right)) + 1;
        */

        // breadth-first-search
        if(root==nullptr) return 0;
        std::queue<TreeNode*> Q;
        Q.push(root);
        int rst = 0;
        while (!Q.empty())
        {
            auto len = Q.size();
            bool finish=false;
            while (len>0)
            {
                auto cur = Q.front();
                Q.pop();
                if(cur->left == nullptr && cur->right==nullptr)
                {
                    finish = true;
                    break;
                }
                if(cur->left!=nullptr) Q.push(cur->left);
                if(cur->right!=nullptr) Q.push(cur->right);
                --len;
            }
            ++rst;
            if(finish) break;
        }
        return rst;
    }
};
// @lc code=end

