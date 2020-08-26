#include<bits/stdc++.h>
using namespace std;
struct node{
    node *left;
    int data;
    node* right;
};
node* newNode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
      
    return(Node);  
}
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
        
    }
    int l=height(root->left);
    int r=height(root->right);
    return max(l+1,r+1);
    
}
void printe(node * root,int i)
{
    if(root==NULL){
        return ;
    }
    if(i==1)
    {
        cout<<root->data<<" ";
    }
    else{
        printe(root->left,i-1);
        printe(root->right,i-1);
    }
}
void printLevelOrder(node * root)
{
    int h;
    h=height(root);
    for(int i=1;i<=h;i++)
    {
        printe(root,i);
    }

}
int main()
{

    node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
  
    cout << "Level Order traversal of binary tree is \n";  
    printLevelOrder(root);  
  
    return 0;  

}