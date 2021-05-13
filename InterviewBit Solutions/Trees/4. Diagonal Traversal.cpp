//Partial Function to calculate Diagonal Traversal

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* root) {
    vector<int>v;
    if(root==NULL)
        return v;
    queue<TreeNode*> q;
    q.push(root);
    TreeNode* cur;
    while(!q.empty())
    {
        cur=q.front();
        q.pop();
        
        while(cur)
        {
            if(cur->left)
                q.push(cur->left);
            v.push_back(cur->val);
            cur=cur->right;
        }
    }
    return v;
}
