//https://leetcode.com/problems/sum-root-to-leaf-numbers/
void s(Tree* root, int sum,int &j)
{
    if(root==NULL){
        return ;
    }
    sum=sum*10+root->val;
    if(root->left==NULL && root->right==NULL)
    {
        j+=sum;
    }
    s(root->left,sum,j);
    s(root->right,sum,j);
    
}
int solve(Tree* root) {
    int sum=0,j=0;
   s(root,sum,j);
   return j;
    
}