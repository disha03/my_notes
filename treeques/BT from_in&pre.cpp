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
    int prei=0;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int l,int r)
    {
        if(l>r)
        {
            return NULL;
        }
        TreeNode* node=new TreeNode(preorder[prei++],NULL,NULL); 
        int index=0;
        for(int i=l;i<=r;i++)
        {
            if(inorder[i]==node->val)
            {
              index=i;
                break;
            }
        }
        node->left=build(preorder,inorder,l,index-1);
        node->right=build(preorder,inorder,index+1,r);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      
       return build(preorder,inorder,0,inorder.size()-1);
    }
};