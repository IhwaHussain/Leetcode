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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> row;
        if(root == nullptr) return result;
        row.push_back(root->val);
        result.push_back(row);
        vector<vector<int>> leftRes = levelOrder(root->left);
        vector<vector<int>> rightRes = levelOrder(root->right);
        size_t rowsToAdd = max(leftRes.size(),rightRes.size());
        for(size_t i =0; i< rowsToAdd; i++)
        {
            if(i<leftRes.size())
            {
                result.push_back(leftRes[i]);
                if(i<rightRes.size())
                {
                    result.back().insert(result.back().end(),rightRes[i].begin(),rightRes[i].end());
                }
            }
            else
            {
                result.push_back(rightRes[i]);
            }
        }
        return result;
    }
};