/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool solve(TreeNode *A, int _min, int _max)
{
  if (A == NULL)
  {
    return true;
  }
  if (A->val <= _min || A->val >= _max)
    return false;

  return solve(A->left, _min, A->val) && solve(A->right, A->val, _max);
}
int Solution::isValidBST(TreeNode *A)
{
  return solve(A, INT32_MIN, INT32_MAX);
}
