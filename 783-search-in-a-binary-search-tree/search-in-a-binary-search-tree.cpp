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
    TreeNode * rec(TreeNode *nod,int vall,TreeNode * &no)
    {
     
     if(nod->val==vall)
     {
        no=nod;
     }
     else
     {
        if(nod->val>vall)
        {
            if(nod->left==NULL){return NULL;}
             rec(nod->left,vall,no);

        }
        else
        {   if(nod->right==NULL){return NULL;}
            rec(nod->right,vall,no);
        }
     }
     return no;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
     TreeNode* ss=NULL;
     rec(root,val,ss);
    return ss;

      
        
    }
};