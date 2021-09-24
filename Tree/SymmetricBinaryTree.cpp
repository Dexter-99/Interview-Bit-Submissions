/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool solve(TreeNode *A, TreeNode *B)
{
  if (A == NULL && B == NULL)
    return true;
  if (A == NULL || B == NULL)
    return false;
  return (A->val == B->val) && solve(A->left, B->right) && solve(A->right, B->left);
}
int Solution::isSymmetric(TreeNode *A)
{
  if (solve(A, A))
    return 1;
  return 0;
}
