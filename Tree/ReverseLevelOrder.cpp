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
  if (A == NULL)
    return list;

  queue<TreeNode *> q;
  q.push(A);
  while (!q.empty())
  {
    TreeNode *curr = q.front();
    q.pop();
    list.push_back(curr->val);
    if (curr->right)
      q.push(curr->right);
    if (curr->left)
      q.push(curr->left);
  }
  reverse(list.begin(), list.end());
  return list;
}
