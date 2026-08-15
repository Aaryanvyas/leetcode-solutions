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

    int i = 0;

    TreeNode* build(vector<int>& preorder, long long min, long long max) {

        if(i == preorder.size())
            return NULL;

        if(preorder[i] <= min || preorder[i] >= max)
            return NULL;

        TreeNode* root = new TreeNode(preorder[i]);
        i++;

        root->left = build(preorder, min, root->val);
        root->right = build(preorder, root->val, max);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {

        return build(preorder, LLONG_MIN, LLONG_MAX);
    }
};