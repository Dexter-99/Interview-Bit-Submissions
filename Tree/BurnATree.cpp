/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void sol(TreeNode *root,TreeNode *par,int B,unordered_map<TreeNode*,TreeNode*> &mp,TreeNode* &target)
 {
     if(root==NULL)
     return;
     if(root->val==B)
     {
         target=root;
     }
     mp[root]=par;
     sol(root->left,root,B,mp,target);
     sol(root->right,root,B,mp,target);
 }
int Solution::solve(TreeNode* A, int B) {
    TreeNode *target=NULL;
    unordered_map<TreeNode*,TreeNode*> mp;
    sol(A,NULL,B,mp,target);
    // cout<<(target?target->val:-1)<<endl;
    unordered_set<TreeNode*> h;
    queue<TreeNode*> q;
    q.push(target);
    h.insert(target);
    int  count=0;
    while(!q.empty())
    {
        int  size=q.size();
        while(size--)
        {
            TreeNode *curr=q.front();
           
            q.pop();
            TreeNode *par=mp[curr];
            if(par&&h.find(par)==h.end())
            {
                q.push(par);
                h.insert(par);
            }
            if(curr->left&&h.find(curr->left)==h.end())
            {
                q.push(curr->left);
                h.insert(curr->left);
            }
            if(curr->right&&h.find(curr->right)==h.end())
            {
                q.push(curr->right);
                h.insert(curr->right);
            }
            
        }
        count++;
    }
    return count;
    
}
