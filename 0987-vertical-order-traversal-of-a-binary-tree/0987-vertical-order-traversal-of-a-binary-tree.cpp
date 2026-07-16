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
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int, map<int, multiset<int>>> mp;
        vector<vector<int>> result;

        if(root==NULL){
            return result;
        }

        queue<pair<pair<int, int>, TreeNode*>> q;
        q.push({{0, 0}, root});

        while(!q.empty()){

            int x= q.front().first.first;
            int y= q.front().first.second;
            TreeNode* currNode= q.front().second;
            mp[y][x].insert(currNode->val);
            q.pop();

            if(currNode->left!=NULL){q.push({{x+1, y-1}, currNode->left});}
            if(currNode->right!=NULL){q.push({{x+1, y+1}, currNode->right});}

        }

        for(auto &[y, rows]: mp){
            vector<int> vec;
            for(auto &[x,currSet]: rows){
                for(int value: currSet){
                    vec.push_back(value);
                }
            }
            result.push_back(vec);
        }

        return result;
        
    }
};