#include <iostream>
using namespace std;
struct node{
    node *left;
    int data;
    node* right;
};
int maxDepth(struct node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    return max(l+1,r+1);
}
node* newNode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
      
    return(Node);  
}
int main() {
    node *root = newNode(1);  
  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
      
	 cout << "Height of tree is " << maxDepth(root);  
    return 0;  
}