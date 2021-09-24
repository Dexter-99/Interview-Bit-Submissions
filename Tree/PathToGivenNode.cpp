/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool path(TreeNode *root, vector<int> &list, int B)
{
  if (root == NULL)
    return false;

  list.push_back(root->val);
  if (root->val == B)
    return true;

  if (path(root->left, list, B) || path(root->right, list, B))
    return true;

  list.pop_back();
  return false;
}
vector<int> Solution::solve(TreeNode *A, int B)
{
  vector<int> list;
  path(A, list, B);
  return list;
}
