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
    void findleaf(TreeNode* root,vector<int> &leaf){
        if(root==nullptr) return ;
        if(root->left==nullptr && root->right==nullptr) leaf.push_back(root->val);
         findleaf(root->left,leaf);
         findleaf(root->right,leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        findleaf(root1,v1);
        findleaf(root2,v2);
        return v1==v2;
    }
};