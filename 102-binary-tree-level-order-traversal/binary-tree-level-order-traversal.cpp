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
      
     queue<TreeNode*> q;
     q.push(root);
    vector<vector<int>> v;
  if (!root) return v;   
      while(!q.empty())
      {
      int size=q.size();
         vector<int> vv;
      
        for(int i=0;i<size;i++){
        TreeNode *nw=q.front();
        q.pop();
        vv.push_back(nw->val);
        if(nw->left)
        {
            q.push(nw->left);

        }
        if(nw->right)
        {
            q.push(nw->right);
        }
        }

       v.push_back(vv);
      }

return v;
    }
};