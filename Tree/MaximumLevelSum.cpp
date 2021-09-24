/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode *A)
{
  if (A == NULL)
    return 0;
  queue<TreeNode *> q;
  q.push(A);
  int _max = 0;
  while (!q.empty())
  {
    int size = q.size();
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
      TreeNode *curr = q.front();
      q.pop();
      sum += curr->val;
      if (curr->left)
        q.push(curr->left);
      if (curr->right)
        q.push(curr->right);
    }
    _max = max(_max, sum);
  }
  return _max;
}
