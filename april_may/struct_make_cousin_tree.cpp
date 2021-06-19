//https://leetcode.com/problems/cousins-in-binary-tree/
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
    struct p{
        TreeNode* a;
        int b;
        TreeNode* c;
        p(TreeNode* x,int y,TreeNode* z)
        {
            a=x;
            b=y;
            c=z;
        }
    };
    bool isCousins(TreeNode* root, int x, int y) {
         ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(root==NULL)return false;
        queue<p*>q;
        p* temp=new p(root,0,NULL);
        q.push(temp);
        p* temp1,*temp2;
        bool xx=false,yy=false;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++){
                p *h=q.front();
                 q.pop();
                if(h->a->val==x)
                {
                    temp1=h;
                    xx=true;
                }
                 if(h->a->val==y)
                {
                    temp2=h;
                    yy=true;
                }
                if(xx==true && yy==true)
                {
                    break;
                }
                if(h->a->left)
                {
                     p* tem=new p(h->a->left,h->b+1,h->a);
                    q.push(tem);
                  
                }
                if(h->a->right)
                {
                     p* tem=new p(h->a->right,h->b+1,h->a);
                    q.push(tem);
                    
                }
               
            }
        }
        if(temp1->b==temp2->b && temp1->c!=temp2->c)
        {
            return true;
        }
        return false;
    }
};