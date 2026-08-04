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
    bool isSymmetric(TreeNode* root) {
        return root == nullptr || isSymmetricHelp(root->left, root->right);
    }

    bool isSymmetricHelp(TreeNode* left, TreeNode* right) {

        // If either one is NULL, both must be NULL
        if (left == nullptr || right == nullptr)
            return left == right;

        // Values should be equal
        if (left->val != right->val)
            return false;

        // Compare mirror children
        return isSymmetricHelp(left->left, right->right) &&
               isSymmetricHelp(left->right, right->left);
    }
};