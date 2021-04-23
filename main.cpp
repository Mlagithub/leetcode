#include <iostream>
#include <vector>
#include <cstdlib>

// #include "67.二进制求和.cpp"
// #include "69.x-的平方根.cpp"
// #include "111.二叉树的最小深度.cpp"
// #include "110.平衡二叉树.cpp"

// template<typename T>
// std::ostream& operator << (std::ostream& os, std::vector<T> v)
// {
//     os << "[";
//     for(auto it : v)
//     {
//         os << it << ",";
//     }
//     os << "\n";
//     return os;
// }

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

/*
void trivalAndCompare(TreeNode* root, TreeNode* comp, int* rst)
{
    if(*rst==0) return;

    if(!root || !comp) *rst = 0;

    if(root->val != comp->val) *rst=0;

    std::cout << "[root, comp]: [" << root->val << ", " << comp->val << "]\n";

    if(root->left)
    {
        trivalAndCompare(root->left, comp->left, rst);
    } 
    if(root->right) 
    {
        trivalAndCompare(root->right, comp->right, rst);
    }
}
*/

#include <cmath>


int main(void)
{
    // Solution solution;
    // TreeNode* t1 = new TreeNode(3);
    // t1->left = new TreeNode(9);
    // t1->right = new TreeNode(20);
    // t1->right->left = new TreeNode(15);
    // t1->right->right = new TreeNode(7);

    std::cout << log2(9) << '\n';


    // std::cout << std::boolalpha;
    // std::cout << "is t1 balance: " << solution.isBalanced(t1) << '\n';

    /*
    TreeNode* t1 = new TreeNode(1);
    t1->left = new TreeNode(2);
    t1->left->left = new TreeNode(3);
    t1->left->right = new TreeNode(6);
    t1->right = new TreeNode(7);
    t1->right->right = new TreeNode(10);

    TreeNode* t2 = new TreeNode(1);
    t2->left = new TreeNode(2);
    t2->left->left = new TreeNode(3);
    t2->left->right = new TreeNode(6);
    t2->right = new TreeNode(7);
    t2->right->right = new TreeNode(10);

    int same = 1;
    trivalAndCompare(t1, t2, &same);
    std::cout << std::boolalpha << (bool)same << '\n';
    */

    /* mySqrt
    std::cout << "sqrt of 2147483647 : " << solution.mySqrt(2147483647) << '\n';
    */

    /* addBinary
    auto s1 = "11", s2 = "1";
    std::cout << solution.addBinary(s1, s2);
    */
    return 0;
}