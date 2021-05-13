//Partial Function to calculate Inorder Traversal without recursion

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int>v;
    stack<TreeNode*> s;
    TreeNode *cur=root;
    
    while(!s.empty() || cur!=NULL)
    {
        if(cur!=NULL)
        {
            s.push(cur);
            cur=cur->left;
        }
        else
        {
            cur=s.top();
            s.pop();
            v.push_back(cur->val);
            cur=cur->right;
        }
    }
    return v;
}
