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
    unordered_set<int> st;

    bool findTarget(TreeNode* root, int k) {
        if (root == NULL) {
            return false;
        }

        // Check if complement already exists
        if (st.find(k - root->val) != st.end()) {
            return true;
        }

        // Store current value
        st.insert(root->val);

        // Search left and right
        return findTarget(root->left, k) ||
               findTarget(root->right, k);
    }
};