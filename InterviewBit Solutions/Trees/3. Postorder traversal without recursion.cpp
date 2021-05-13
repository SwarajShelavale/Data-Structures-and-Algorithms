//Partial Function to calculate Postorder Traversal without recursion

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* root) {
    vector<int>v;
    if(root==NULL)
        return v;
    stack<TreeNode*> s,print;
    s.push(root);
    TreeNode* cur;
    
    while(!s.empty())
    {
        cur=s.top();
        s.pop();
        print.push(cur);
        
        if(cur->left)
            s.push(cur->left);
        if(cur->right)
            s.push(cur->right);
        
    }
    while(!print.empty())
    {
        TreeNode *data=print.top();
        print.pop();
        v.push_back(data->val);
    }
    return v;
}
