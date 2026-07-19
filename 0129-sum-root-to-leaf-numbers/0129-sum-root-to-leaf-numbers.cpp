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

 void dfs(TreeNode* node , int currentsum , int& sum){
    if(node == NULL){
        return;
    }
    
    currentsum = currentsum * 10 + node ->val;
    // check for the leaf condition
    if(node -> left == NULL && node -> right == NULL){
        sum += currentsum;
        return;
        
    }
    else{
        dfs(node -> left , currentsum , sum);
        dfs(node -> right , currentsum , sum);
    }
    
}
    int sumNumbers(TreeNode* root) {
        int currentsum = 0;
        int sum = 0;

        if( root == NULL){
            return 0;
        }
         dfs(root, currentsum , sum);
         return sum;
        
        
    }
};