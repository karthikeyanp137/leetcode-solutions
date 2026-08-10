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
    vector<vector<int>> ans;
    void levelorder(TreeNode* root){
        if(root==nullptr) return;
        queue<TreeNode*> q;
        q.push(root);
        vector<int>v;

        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                v.push_back(temp->val);
                q.pop();

                if(temp->left!=nullptr){
                    q.push(temp->left);
                }
                if(temp->right!=nullptr){
                    q.push(temp->right);
                }
            }
            ans.push_back(v);
            v.clear();
    
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        levelorder(root);
        return ans;
        
    }
};