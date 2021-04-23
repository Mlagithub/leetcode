/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        return trival(root, targetSum);
    }
private:
    bool trival(TreeNode* root, int targetSum)
    {
        if(root->left==nullptr && root->right==nullptr)
        {
            return targetSum==root->val;
        }
        else
        {
            return ((root->left!=nullptr) && trival(root->left, targetSum-root->val)) || ((root->right!=nullptr)&&trival(root->right, targetSum-root->val));
        } 
    }
};
// @lc code=end

