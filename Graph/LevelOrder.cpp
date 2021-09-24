/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int>> Solution::levelOrder(TreeNode *A)
{
  queue<TreeNode *> q;
  q.push(A);
  vector<vector<int>> list;
  while (!q.empty())
  {
    int len = q.size();
    vector<int> res;
    for (int i = 0; i < len; i++)
    {
      TreeNode *curr = q.front();
      q.pop();
      res.push_back(curr->val);
      if (curr->left != NULL)
      {
        q.push(curr->left);
      }
      if (curr->right != NULL)
      {
        q.push(curr->right);
      }
    }
    list.push_back(res);
  }
  return list;
}