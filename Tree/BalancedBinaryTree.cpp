/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int solve(TreeNode *A)
{
  if (A == NULL)
    return 0;

  int lh = solve(A->left);
  int rh = solve(A->right);
  if (lh == -1 || rh == -1 || abs(lh - rh) > 1)
    return -1;
  return 1 + max(lh, rh);
}
int Solution::isBalanced(TreeNode *A)
{
  if (solve(A) == -1)
    return 0;
  return 1;
}
