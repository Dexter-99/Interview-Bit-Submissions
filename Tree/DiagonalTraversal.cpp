/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode *A)
{
  vector<int> list;
  queue<TreeNode *> q;
  q.push(A);
  while (!q.empty())
  {
    TreeNode *temp = q.front();
    q.pop();
    while (temp)
    {
      list.push_back(temp->val);
      if (temp->left)
        q.push(temp->left);
      temp = temp->right;
    }
  }
  return list;
}
