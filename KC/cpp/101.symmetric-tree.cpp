/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }

        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode *a, TreeNode *b)
    {
        if (a == NULL && b == NULL)
        {
            return true;
        }

        if (a == NULL || b == NULL)
        {
            return false;
        }

        bool comparison1 = isMirror(a->left, b->right);
        bool comparison2 = isMirror(a->right, b->left);
        return a->val == b->val && comparison1 && comparison2;
    }
};
// @lc code=end
