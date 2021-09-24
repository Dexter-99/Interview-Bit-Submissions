/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode *Solution::invertTree(TreeNode *A)
{
  if (A == NULL)
    return NULL;

  TreeNode *l = invertTree(A->left);
  TreeNode *r = invertTree(A->right);
  A->left = r;
  A->right = l;
  return A;
}
