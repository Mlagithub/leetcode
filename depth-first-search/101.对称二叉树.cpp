/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    /* depth-first-search
    bool isSymmetric_(TreeNode* left, TreeNode* right)
    {
        if(left == nullptr && right == nullptr)
        {
            return true;
        }
        else if(left == nullptr || right == nullptr)
        {
            return false;
        }
        else if(left->val != right->val)
        {
            return false;
        }
        else 
        {
            return isSymmetric_(left->left, right->right) && isSymmetric_(left->right, right->left);
        }
    }

    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return isSymmetric_(root, root);
    }
    */

    // breadth-first-search
    bool isSymmetric(TreeNode* root)
    {
        std::queue<TreeNode*> q;
        auto left = root, right = root;
        q.push(left);
        q.push(right);
        while (!q.empty())  
        {
            auto l = q.front(); q.pop();
            auto r = q.front(); q.pop();
            if(l == nullptr && r==nullptr)
            {
                continue;
            }
            else if(l==nullptr || r==nullptr)
            {
                return false;
            }
            else if(l->val != r->val)
            {
                return false;
            }
            else
            {
                q.push(l->left);
                q.push(r->right);
                q.push(l->right);
                q.push(r->left);
            }
        }
        return true;
    }
};
// @lc code=end

