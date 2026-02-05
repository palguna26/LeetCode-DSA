/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (root) {
            // Both nodes are in left subtree
            if (p->val < root->val && q->val < root->val) {
                root = root->left;
            }
            // Both nodes are in right subtree
            else if (p->val > root->val && q->val > root->val) {
                root = root->right;
            }
            // Split happens OR one equals root
            else {
                return root;
            }
        }
        return nullptr;
    }
};
