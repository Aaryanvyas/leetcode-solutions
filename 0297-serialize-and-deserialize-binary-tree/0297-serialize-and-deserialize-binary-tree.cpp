/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Serialize
    string serialize(TreeNode* root) {
        if (root == NULL)
            return "null";

        return to_string(root->val) + "," +
               serialize(root->left) + "," +
               serialize(root->right);
    }

    // Helper for Deserialize
    TreeNode* build(vector<string>& nodes, int& idx) {

        if (nodes[idx] == "null") {
            idx++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(nodes[idx]));
        idx++;

        root->left = build(nodes, idx);
        root->right = build(nodes, idx);

        return root;
    }

    // Deserialize
    TreeNode* deserialize(string data) {

        vector<string> nodes;
        string temp;

        for (char c : data) {
            if (c == ',') {
                nodes.push_back(temp);
                temp.clear();
            } else {
                temp += c;
            }
        }

        nodes.push_back(temp);

        int idx = 0;
        return build(nodes, idx);
    }
};