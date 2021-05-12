class Solution {
public:
    bool flag=true;
int height(TreeNode* node)
{
    if(node==NULL)
    {
        return 0;
    }
    int lh=height(node->left);
    int rh=height(node->right);
    if(abs(lh-rh)>1)
    {
        flag=false;
        
    }
    return 1+max(lh,rh);
}
    bool isBalanced(TreeNode* root) {
        height(root);
    return flag;
    }
};