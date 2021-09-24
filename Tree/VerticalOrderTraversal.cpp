/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int>> Solution::verticalOrderTraversal(TreeNode *A)
{
  vector<vector<int>> list;
  if (A == NULL)
    return list;
  map<int, vector<int>> mp;
  queue<pair<int, TreeNode *>> q;
  q.push({0, A});
  while (!q.empty())
  {
    pair<int, TreeNode *> p = q.front();
    q.pop();
    mp[p.first].push_back(p.second->val);
    if (p.second->left)
    {
      q.push({p.first - 1, p.second->left});
    }
    if (p.second->right)
    {
      q.push({p.first + 1, p.second->right});
    }
  }

  for (auto x : mp)
  {
    list.push_back(x.second);
  }
  return list;
}
