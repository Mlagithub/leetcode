/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };


class Solution {
public:
    bool isBalanced(TreeNode* root) {
        // depth-first-search
        return maxDepth(root)>=0;
    }
private:
    int maxDepth(TreeNode* root)
    {
        if(root==nullptr) return 0;
        auto leftH = maxDepth(root->left);
        auto rightH = maxDepth(root->right);
        if(leftH==-1 || rightH==-1 || std::abs(leftH-rightH)>1) return -1;
        return std::max(leftH, rightH)+1;
    }
};
// @lc code=end

