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
    void insert(TreeNode* root, vector<int>&ls){
        if(root == NULL){

            return;
        }
        ls.push_back(root->val);
        insert(root->left,ls);
        insert(root->right,ls);
    } 
    
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ls;
        insert(root,ls);
        // insert(root->right,ls);
        sort(ls.begin(),ls.end());
        return ls[k-1];
    }
};